#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;
using mint = modint1000000007;

//Some Sums

//SumOfDigit
int SumOfDighit(int n){
  int sum = 0;
  
  while(n > 0){
    sum += n % 10;
    n /= 10;
  }
  return sum;
}



int main() {
  int N,A,B;
  cin >> N >> A >> B;
  
  int ans = 0;
  int target = 0;
  int sum = 0;

  //cout << N << "," << A << "," << B << endl;
  for (int i = 0; i < N; i++)
  {
    int sum = SumOfDighit(i);

    //範囲内かチェック
    if(A <= sum && sum <= B){
      ans += i; //範囲内だったら加算
    }

  }
  cout << ans << endl;
  return 0;
}