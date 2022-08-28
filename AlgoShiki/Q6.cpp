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
  int n,m;
  cin >> n >> m;
  vector<int> a(m);
  vector<bool> dp(n,false);

  for (int i = 0; i < m; i++)
  {
    cin >> a[i];
  }

  dp[0] = true;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if ((i-a[j] >= 0) && dp[i-a[j]])
      {
        dp[i] = true;
      }
    }
  }
  
  string ans = "No";

  if (dp[n])
  {
    ans = "Yes";
  }
  
  cout << ans << endl;

  return 0;
}