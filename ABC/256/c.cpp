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
  int h[3],w[3];
  //int a[4][4]= {0};
  vector<vector<int>> a(3,vector<int>(3)); //vector型で3x3の2次元配列を用意。

  for (int i = 0; i < 3; i++)
  {
    cin >> h[i];
  }
  for (int i = 0; i < 3; i++)
  {
    cin >> w[i];
  }

  int m = 30;
  int m4 = m*m*m*m;
  int ans = 0;

  for (int s = 0; s < m4; s++)
  {
    int tmp = s;
    a[0][0] = (tmp % m)+1; tmp/=m; //m進数として考える。1桁目を切り出して、1桁シフト。
    a[0][1] = (tmp % m)+1; tmp/=m; //m進数として考える。1桁目を切り出して、1桁シフト。
    a[1][0] = (tmp % m)+1; tmp/=m; //m進数として考える。1桁目を切り出して、1桁シフト。
    a[1][1] = (tmp % m)+1; tmp/=m; //m進数として考える。1桁目を切り出して、1桁シフト。

    bool ok = true; //条件満たしているかフラグ
    
    //hのチェック
    for (int i = 0; i < 2; i++)
    {
      a[i][2] = h[i] - a[i][0] - a[i][1];
      if(a[i][2] < 1) ok = false;
    }
    //wのチェック
    for (int i = 0; i < 3; i++)
    {
      a[2][i] = w[i] - a[0][i] - a[1][i];
      if(a[2][i] < 1) ok = false;
    }

    //最後にh2もチェック
    if((a[2][0] + a[2][1] + a[2][2]) != h[2]) ok = false;

    if(ok) ans++;
  }
  
  cout << ans << endl;
  return 0;
}