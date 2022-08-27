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
  vector<int> a(n);
  vector<int> dp(n);
  int tmp1, tmp2;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  
  dp[1] = a[1];

  for (int i = 2; i < n; i++)
  {
    tmp1 = dp[i-1] + a[i];
    tmp2 = dp[i-2] + a[i]*2;

    dp[i]= min(tmp1,tmp2);
  }
  
  cout << dp[n-1] << endl;
  return 0;
}