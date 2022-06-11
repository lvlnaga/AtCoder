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

//A - RGB Cards

int main() {
  int r,g,b;
  cin >> r >> g >> b;

  int num = 100*r + 10*g +b;
  cout << num << endl;
  if (num % 4 == 0)
  {
    cout << "YES" << endl;
  }else{
    cout << "NO" << endl;
  }
  return 0;
}
 