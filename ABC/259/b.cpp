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
  int a,b,d;
  cin >> a >> b >> d;
  
  double x,y;
  double theta = d * (acos(-1) / 180);
  x = a * cos(theta) - b * sin(theta);
  y = a * sin(theta) + b * cos(theta);
  //int ans = 0;

  cout << fixed << setprecision(10) << x << ' ' << y << endl;
  
  return 0;
}