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
  ll ans = 0;

  for (int i = 1; i <= n; i++)
  {
    if (i % 15 == 0)
    {
      continue;
    }
    else if (i % 3 == 0)
    {
      continue;
    }
    else if (i % 5 == 0)
    {
      continue;
    }
    else
    {
      ans += i;
    }
  }
  
  cout << ans << endl;
  return 0;
}