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

  vector<int> a(n);
  vector<vector<int>> b(k);

  //Kで割ったあまりのグループで管理しておく。
  //そのグループの中でソートはできるっていうこと
  //グループごとにソート
  //復元
  //答えと一致すればYes、一致しなければNo


  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    b[i%k].push_back(a[i]); //Kで割ったあまりのグループで管理
  }

  //aをソートして答えを求める
  sort(a.begin(),a.end());

  //bをグループごとにソート
  //vector側はお尻からしか取り出せない(pop_back)なので、降順でソートしておく
  for (int i = 0; i < k; i++)
  {
    sort(b[i].rbegin(),b[i].rend());
  }
  

  //グループわけして、ソートした状態のbを復元
  //降順にソートしたのでおしりから取り出していく
  vector<int> c;
  for (int i = 0; i < n; i++)
  {
    c.push_back(b[i%k].back());//お尻のやつを取得
    b[i%k].pop_back();//おしりのやつを削除
  }
  

  if(a == c){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }

  return 0;
}