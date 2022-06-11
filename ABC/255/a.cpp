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
  int n,i,j,R,C;
  cin >> R >> C;
  int A[3][3];

  cin >> A[1][1] >> A[1][2];
  cin >> A[2][1] >> A[2][2];

  cout << A[R][C] << endl;
  return 0;
}