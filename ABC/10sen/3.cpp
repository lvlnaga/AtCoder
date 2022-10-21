//#include <bits/stdc++.h>
using namespace std;
//#include <atcoder/all>
//using namespace atcoder;
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <queue>
#include <algorithm>
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n + 1); i++)
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;
//using mint = modint1000000007;

// https://atcoder.jp/contests/abc081/tasks/abc081_b

int main()
{
  int n;
  cin >> n;

  // vector型で入力を受け取る
  vector<int> a(n);

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  int ans = 0; //操作回数出力用

  while (true)
  {
    bool exist_odd = false; // true:奇数あり, false:奇数なし(すべて偶数)
    //偶数チェック
    for (int i = 0; i < n; i++)
    {
      if (a[i] % 2 == 1)
        exist_odd = true;
    }
    //奇数があれば修了
    if (exist_odd)
      break;

    //奇数がなければすべて2で割る
    for (int i = 0; i < n; i++)
    {
      a[i] /= 2;
    }

    //操作回数をインクリメント
    ++ans;
  }

  cout << ans << endl;
  return 0;
}