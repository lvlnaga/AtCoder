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
  long long X,A,D,N;
  cin >> X >> A >> D >> N;

  //等差数列を計算
  vector<ll> S(N);

  for (ll i = 0; i < N; i++)
  {
    S[i] = A + i * D;
  }

  /*
  for (const auto& e: S)
  {
    cout << e << endl;
  }
  */

  //Xを+1, -1  した値がSに含まれるかをチェック
  ll X_inc, X_dec;
  X_inc = X_dec = X;
  ll ans = 0;
  while (1)
  {
    auto inc_hit = find(S.begin(),S.end(),X_inc);
    auto dec_hit = find(S.begin(),S.end(),X_dec);
    
    if (inc_hit != S.end() || dec_hit != S.end())
    {
      break;
    }
    
    X_inc++;
    X_dec--;
    ans++;
  }
  

  cout << ans << endl;
  return 0;
}