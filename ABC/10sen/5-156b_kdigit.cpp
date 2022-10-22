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

//https://atcoder.jp/contests/abc156/tasks/abc156_b


/*
int getNumOfDigit(int n){
  int sum = 0;

  while (n > 0)
  {
    sum += n % 10;  //末尾一桁を取得
    n /= 10;        //一桁右へシフト
  }

  return(sum);
}
*/

int main() {
  int n,k;
  cin >> n >> k;

  int ans = 0;

  while (n > 0)
  {
    n /= k; //k進数のときの一桁右シフト
    ans++;
  }
  
  cout << ans << endl;
  return 0;
}