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
  //int n;
  //cin >> n;

  vector<vector<int>> dp(4,vector<int>(4,0));

  for (int i = 0; i < 4; i++)
  {
    cin >> dp[0][i];
  }
  
  for (int i = 1; i < 4; i++)
  {
    for (int j = 0; j < 4; j++)
    {
      if (j-1>= 0)
      {
        dp[i][j] += dp[i-1][j-1];
      }
            
      dp[i][j] += dp[i-1][j];
      
      if (j+1 < 4)
      {
        dp[i][j] += dp[i-1][j+1];
      }
    }
  }
  

  int ans = dp[3][3];

  cout << ans << endl;
  return 0;
}