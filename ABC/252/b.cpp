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
  int n,k;
  cin >> n >> k;
  vector <int> a(n);
  vector <int> b(k);

  rep(i,n) cin >> a[i];
  rep(i,k) cin >> b[i];

  int max = *max_element(a.begin(),a.end());

  string ans = "No";
  for (int i = 0; i < k; i++)
  {
    if(a[b[i]-1] == max) ans = "Yes";
  }

  cout << ans << endl;
  return 0;
}