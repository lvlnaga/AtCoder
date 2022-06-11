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
  int N;
  cin >> N;

  int t[110000], x[110000], y[110000];

  for (int i = 0; i < N; i++)
  {
    cin >> t[i+1] >> x[i+1] >> y[i+1];
  }
  
  bool can = true;
  
  for (int i = 0; i < N; i++)
  {
    int dt = t[i+1] - t[i];
    int dist = abs(x[i+1]-x[i]) + abs(y[i+1]-y[i]);

    if (dt < dist) //時間より距離が大きくなることはありえない
    {
      can = false;
    }
    if (dt % 2 != dist % 2)//パリティが一致する
    {
      can = false;
    }
  }
  
  if (can)
  {
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
  return 0;
}