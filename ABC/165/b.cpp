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
  ll x,i=0;
  cin >> x;

  ll ans = 100;
  while(ans < x)
  {
    // ans = ans * 1.01;
    ans = ans + ans / 100;
    // ans = ((100 * ans) + ans) / 100;
    i++;
  }
  cout << i << endl;
  return 0;
}