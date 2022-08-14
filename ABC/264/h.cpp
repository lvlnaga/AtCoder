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
  int n = 3;
  //cin >> n;

  
  //{0, 1, ..., n-1}の部分集合の全探索

  // 各数字において、選ぶ/選ばないの2通りあるので
  // 選び方は2^n -１通りある。
  // 2^n は 1<<n　で表せるので bit < (1<<n) と書いておけば全探索できる。
  for (int bit = 0; bit < (1 << n); bit++)
  {
    vector<int> S;
    for (int i = 0; i < n; i++)  //各bitを捜査
    {
      if(bit & (1<<i)){ //列挙に0,1, ... ,nが含まれるか
        S.push_back(i); //セットされているbitと対応する番号をSへ格納
      }
    }

    cout << bit << ": {";
    for (int i = 0; i < (int)S.size(); i++)
    {
      cout << S[i] << " ";
    }
    cout << bit << ": {";
  
  }
  
  int ans = 0;
  cout << ans << endl;
  return 0;
}