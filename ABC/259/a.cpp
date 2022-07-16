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
  int n,m,x,t,d;
  cin >> n >> m >> x >> t >> d;

  int ans = 0;

  if (x <= m && m <= n)
  {
    ans = t;
  }
  else if(m < x)
  {
    ans = t - ((x - m) * d);
  }else{
    ans = t - ((n - m) * d);
  }
  

  cout << ans << endl;
  return 0;
}