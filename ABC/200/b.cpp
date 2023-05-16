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

// https://atcoder.jp/contests/abc200/tasks/abc200_b

int main()
{
  ll n, k;
  cin >> n >> k;

  for (int i = 0; i < k; i++)
  {
    // Nが200の倍数
    if (n % 200 == 0)
    {
      // Nを200でわる
      n = n / 200;
    }
    else
    {
      // おしりに文字列として'200'付け加えた整数にする
      // 1000倍して + 200すればOK
      n = n * 1000;
      n = n + 200;
    }
  }

  cout << n << endl;
  return 0;
}