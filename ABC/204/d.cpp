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
/*  
  bitset<100001> dp;//<>の中は何ビット使うか。 今回は最大値が 10^3 * 100 なので 100000 + 1 個のbitが必要
  dp[0] = 1; //?
  int tot = 0;
  for (int i = 0; i < n; i++)
  {
    int t;
    cin >> t;
    tot += t;
    dp |= dp << t; //できるできないのdpはシフトしてor取ったやつと一致する。
  }

  int ans = tot;
  for (int i = 0; i < tot+1; i++)
  {
    if (dp[i])//?
    {
      ans = min(ans,max(i,(tot-i)));//ansはレンジA, もう一個はレンジBの時間それが最小になるパターンを探している。
    }
  }
  cout << ans << endl;
*/

  int s = 0;
  vector<int> t(n+1,0);
  
  for (int i = 0; i <= n; i++)
  {
    cin >> t[i+1];
    s += t[i];
  }
  //int ss = ceil((double)s/(double)2);
  
  vector<vector<bool>> dp(n+1, vector<bool>(s+1,false));

  dp[0][0] = true;

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= s; j++)
    {
      if(dp[i-1][j])
      {
        dp[i][j] = true;
      }
      else if(((j-t[i]) >= 0)  && dp[i-1][j-t[i]])
      {
        dp[i][j] = true;
      }
    } 
  }

  int ans = INT_MAX;

  for (int j = 0; j <= s; j++)
  {
    if (dp[n][j])
    {
      ans = min(ans,max(j,s-j));
    }
  }
  
  cout << ans << endl;
/*

  for (int i = 0; i <= n; i++)
  {
    for (int j = 0; j <= s; j++)
    {
      if (t[i] == j)
      {
        dp[i][j] = true;
      }
      else if(((i-1) >= 0) && dp[i-1][j])
      {
        dp[i][j] = true;
      }
      else if(((j-t[i]) >= 0) && ((i-1) >= 0) && dp[i-1][j-t[i]])
      {
        dp[i][j] = true;
      }
      
      if (dp[i][j] && j>=floor((double)s/(double)2))
      {
        cout << j << endl;
        return 0;
      }
    }
  }

  */
  
  return 0;
} 