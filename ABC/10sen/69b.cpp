#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;
using mint = modint1000000007;

// https://atcoder.jp/contests/abc069/tasks/abc069_b

int main()
{
  string s;
  cin >> s;

  //文字列のサイズを計算
  //文字列のサイズ - 2を算出
  int i_central_size = s.size() - 2;

  //文字列に変換
  string s_central_size = to_string(i_central_size);

  // s[0] + サイズ +s[末尾]　の文字列結合
  //出力
  string ans = s[0] + s_central_size + s[s.size() - 1];

  cout << ans << endl;
  return 0;
}