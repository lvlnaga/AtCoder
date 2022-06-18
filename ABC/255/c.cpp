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
  ll ans;
  cin >> X >> A >> D >> N;

  //todo Dがマイナスのときも考える

  //末項を計算
  ll m = A + D*(N-1);

  if(D < 0)//Dがマイナスのとき、初項と末項をひっくり返して考える
  {
    swap(A,m);//初項と末項をswap
    D = -1 * D;//Dをプラスにする。
  }

  if (X <= A)//初項よりも小さい時
  {
    ans = A - X;
  }
  else if(m <= X)//末項よりも大きいとき
  {
    ans = X - m;
  }
  else
  {
    //Xの手前の要素が何項目かを計算
    ll t = (X - A)/D + 1;
    ans = min(abs(X- (A+D*(t-1))),abs(X - (A+D*(t))));
  }
  
  cout << ans << endl;
  /*
  for (const auto& e: S)
  {
    cout << e << endl;
  }
  */
  /*
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
  
  */

  return 0;
}