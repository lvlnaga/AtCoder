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

const int MOD = 998244353;
int dp[1000005][10];
//int dp[100005][10];
int main() {

  

  int n;  
  cin >> n;

  //n=1はd[n][k] = 1;
  for (int i = 1; i <= 9; i++)
  {
    dp[1][i] = 1;
  }

  //dpを計算
  for (int i = 2; i <= n; i++)
  {
    for (int j = 1; j <= 9; j++)
    {
      if (j >= 2)
      {
        dp[i][j] += dp[i-1][j-1];
        dp[i][j] %= MOD;
      }
      
      dp[i][j] += dp[i-1][j];
      dp[i][j] %= MOD;
      
      if (j <= 8)
      {
        dp[i][j] += dp[i-1][j+1];
        dp[i][j] %= MOD;
      }

      //dp[i][j] %= MOD;
    }
  }
  
  int ans = 0;
 
  for (int i = 1; i <= 9; i++)
  {
    ans += dp[n][i];
    ans %= MOD;
  }  
  
  cout << ans << endl;
  return 0;
}