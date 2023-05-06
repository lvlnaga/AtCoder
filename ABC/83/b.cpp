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
  int n, a, b;
  cin >> n >> a >> b;

  int target=0, sum=0, tmp_sum = 0;

  for (int i = 1; i <= n; i++)
  {
    tmp_sum = 0;
    target = i;

    // 各桁の和を計算
    while (target)
    {
      tmp_sum += target % 10;
      target = target / 10;
    }

    // a以上b以下ならば、足し込む
    if (a <= tmp_sum && tmp_sum <= b)
    {
      sum += i;
    }
  }

  cout << sum << endl;
  return 0;
}  