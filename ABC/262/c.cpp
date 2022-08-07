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
  ll same,ans;

  cin >> n;
  vector<int> a(n);
  
  ans = same = 0;


  //a[i] == i になっているやつをカウント
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    a[i] -= 1;

    if(a[i] == i) same++;
  }

  //sameの中から2つを選んだやつは条件満たす。nC2を計算
  ans = (same * (same - 1 ))/2;


  //ひっくり返るパターンもありうる
  //a[i] == j も探す → a[a[i]] == i を探せばOK.
  //ひっくり返ってないとだめだから、 a[i] > iは大きいという条件もあり。
  
  for (int i = 0; i < n; i++)
  {
    if ((a[a[i]] == i) and (a[i] > i))
      ans ++;
  }
  
  cout << ans << endl;
  return 0;
}