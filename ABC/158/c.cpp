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

// https://atcoder.jp/contests/abc158/tasks/abc158_c
// x * 1.08 = a　..  x = a / 1.08
// x * 1.10 = b  .. x = b / 1.10
/*
振り返り
- floorとか使わなくても 100倍で計算して、 あとで100で割れば買ってに切り捨てになる。


*/

int main() {
  int a,b;
  cin >> a >> b;
  int tax_a,tax_b;

  for (int i = 1; i <= 1000; i++)
  {
    tax_a = floor(i * 0.08);
    tax_b = floor(i * 0.10);
    
    if(tax_a == a && tax_b == b){
      cout << i << endl;
      return (0);
    }
  }

  cout << -1 << endl;
  return (0);
}