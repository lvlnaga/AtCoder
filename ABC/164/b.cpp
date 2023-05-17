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

int main()
{
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  // 高橋 体力:a, 攻撃力:b
  // 青木 体力:c, 攻撃力:d
  int i = 1;
  //どちらも体力が残っている限りループ
  for (i = 1; (a > 0) && (c > 0); i++)
  {
    if (i % 2 == 1) //高橋のターン
    {
      c = c - b;
    }
    else //青木のターン
    {
      a = a - d;
    }
  }

  if ((i-1) % 2 ==1)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
  
  return 0;
}