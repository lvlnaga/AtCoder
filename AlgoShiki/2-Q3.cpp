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
  int n;
  cin >> n;

  vector<vector<int>> a(n,vector<int>(3,0));
  vector<vector<int>> dp(n,vector<int>(3,0));

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cin >> a[i][j];
    }
  }
  
  //0日目のdp(報酬)をとりあえず埋める。

  for (int j = 0; j < 3; j++)
  {
    dp[0][j] = a[0][j];
  }
  

  //1日目以降のdp(報酬を計算)
  for (int i = 1; i < n; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      //i日目に仕事jに取り組むとき、その日の成果の最大値を求める。
      //ただし　
      //i-1日目に仕事0, 仕事1

      vector<int> tmp;
      for (int k = 0; k < 3; k++)
      {
        if(k!=j) tmp.push_back(dp[i-1][k]);
      }
      
      dp[i][j] += *max_element(tmp.begin(),tmp.end());
      dp[i][j] += a[i][j];
    }
  }
  

  int ans = *max_element(dp[n-1].begin(),dp[n-1].end());
  cout << ans << endl;
  return 0;
}