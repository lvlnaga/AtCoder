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
  int a,b;
  cin >> a >> b;
  int ans = 0;

  for (int i = a; i <= b; i++)
  {
    // 確認対象の数字を文字列型に変換
    string str_i = to_string(i);
    int i_length = str_i.length() - 1; //添字計算用にひいておく
    bool is_kaibun = true; //回文かどうかフラグ
    
    for (int j = 0; j <= i_length; j++)
    {
      if(str_i[j] != str_i[i_length - j])
      {
        is_kaibun = false;
        break;
      }
    }
    
    // 回文だったらOK
    if (is_kaibun)
    {
      ans ++;
    }
  }
  


  cout << ans << endl;
  return 0;
}