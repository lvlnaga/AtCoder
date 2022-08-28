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

  vector<int> a(n);
  vector<int> dp(n,INT_MAX);
  vector<int> tmp(m,INT_MAX);
  vector<int> pretmp(m,INT_MAX);

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  dp[0] = 0;


  for (int i = 1; i < n; i++)
  {
    for (int j = 1; j <= m; j++)
    {
      if (j<=i)
      {
        dp[i] = min(dp[i], dp[i-j] + a[i]*j);
      }
    }
  }

  cout << dp[n-1] << endl;
  return 0;
}