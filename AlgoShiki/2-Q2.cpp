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

int main() {
  int n;
  cin >> n;

  vector<vector<int>> dp(n,vector<int>(n,0));

  for (int i = 0; i < n; i++)
  {
    cin >> dp[0][i];
  }
  
  for (int i = 1; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (j-1>= 0)
      {
        dp[i][j] += dp[i-1][j-1];
        dp[i][j] %= 100;
      }
            
      dp[i][j] += dp[i-1][j];
      dp[i][j] %= 100;

      if (j+1 < n)
      {
        dp[i][j] += dp[i-1][j+1];
        dp[i][j] %= 100;
      }
    }
  }
  

  int ans = dp[n-1][n-1];

  cout << ans << endl;
  return 0;
}