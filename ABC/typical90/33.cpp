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

// 033 - Not Too Bright

int main()
{
  int h, w, ansh, answ, ans;
  cin >> h >> w;

  // hの処理
  if (h % 2) // 奇数
  {
    ansh = h / 2 + 1;
  }
  else // 偶数
  {
    ansh = h / 2;
  }

  // wの処理
  if (w % 2) // 奇数
  {
    answ = w / 2 + 1;
  }
  else // 偶数
  {
    answ = w / 2;
  }

  // どっちかが一行のときはそのまま掛け算でOK
  if (h==1)
  {
    answ = w;
  }
  if (w==1)
  {
    ansh = h;
  }
  

  ans = ansh * answ;

  cout << ans << endl;

  return 0;
}
