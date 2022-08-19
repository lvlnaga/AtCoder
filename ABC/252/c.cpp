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
  string s[100];
  int cnt[10][10];
  
  //カウンタを初期化
  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      cnt[i][j] = 0;
    }
  }

  for (int i = 0; i < n; i++)
  {
    cin >> s[i];
    for (int j = 0; j < 10; j++)
    {
      cnt[s[i][j]-'0'][j]++;
    }
  }
  
  
  int ans = 999999;

  //count ans
  for (int i = 0; i < 10; i++)
  {
    int mx = 0;
    for (int j = 0; j < 10; j++)
    {
      mx = max((cnt[i][j]-1)*10 + j,mx);
    }
    ans = min(ans,mx);
  }


  cout << ans << endl;
  return 0;
}