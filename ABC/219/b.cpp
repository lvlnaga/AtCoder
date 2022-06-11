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

//ABC081B - Shift only

int A[210];

int main() {
  int n,i;
  cin >> n;
  for (i = 0; i < n; i++)
  {
    cin >> A[i];
  }
  
  int ans = 0;
  bool exist_odd = false; //奇数あるかどうかフラグ

  //check gusu
  while(true){
    for(i = 0; i < n; i++){
      if(A[i] % 2 != 0){ //奇数あればフラグセット
        exist_odd = true; 
      }
    }
      if(exist_odd)//奇数があればwhile抜ける
        break;
      
    //奇数無ければ
    for(i =0; i < n; i++){
      A[i] = A[i]/2;
    }
    ans ++;
  }
  cout << ans << endl;
  
  return 0;
}