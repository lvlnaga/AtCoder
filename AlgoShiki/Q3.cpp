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
  vector<int> dp(n+1);
  
  dp[0] = 1; //登らないパターンは1通り
  dp[1] = 1; //一段登るのは1通り

  for (int i = 2; i <= n; i++)
  {
    dp[i] = dp[i-1] + dp[i-2];
  }
  
  cout << dp[n] << endl;
  return 0;
}