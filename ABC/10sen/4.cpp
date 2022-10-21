//#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
//#include <atcoder/all>
//using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;
//using mint = modint1000000007;

//https://atcoder.jp/contests/abc087/tasks/abc087_b

int main() {
  int a,b,c,x;
  cin >> a >> b >> c >> x;

  int ans = 0;

  for (int i = 0; i <= a; i++)
  {
    for (int j = 0; j <= b; j++)
    {
      for (int k = 0; k <= c; k++)
      {
        //x と一致する場合 ansをインクリメント
        int sum = i*500 + j*100 + k*50;
        if(sum == x)
          ++ans;
      }
    }
  }
  

  cout << ans << endl;
  return 0;
}