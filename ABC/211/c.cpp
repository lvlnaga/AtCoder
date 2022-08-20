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
  string s,t;
  cin >> s;
  t = "chokudai";
  const int mod = 1000000007;
  //dp[i][j]
  //「Sのi文字目までを使ってchokudaiのj文字目までを選択する方法」と定義する
  // N=|S|, T=chokudai
  //
  vector<vector<ll>> dp(s.size()+1, vector<ll>(9,0));

  for (ll i = 0; i < (ll)s.size()+1; i++)
  {
    for (ll j = 0; j < (ll)t.size()+1; j++)
    {
      if (j == 0)
      {
        dp[i][j] = 1;
      }
      else if (i == 0 && 1 <= j && j <= (ll)t.size())
      {
        dp[i][j] = 0;
      }
      else if (s[i-1]==t[j-1])
      {
        dp[i][j] = (dp[i-1][j-1] + dp[i-1][j])% mod;
      }else
      {
        dp[i][j] = dp[i-1][j];
      }
    }
  }
  
  //ll ans = dp[s.size()][t.size()];
  
  cout << dp[s.size()][t.size()] << endl;
  return 0;
}