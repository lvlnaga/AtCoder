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

//https://atcoder.jp/contests/abc175/tasks/abc175_b

int main() {
  int n;
  cin >> n;
  //lを受け取る
  vector<int> l(n);
  for (int i = 0; i < n; i++)
  {
    cin >> l[i];
  }

  //sort
  sort(l.begin(),l.end());
  
  //全探索して、a != b, b!=c, c!=a, a + b > c であることが分かればOK

  int ans = 0;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < i; j++)
    {
      for (int k = 0; k < j; k++)
      {
        if ((l[i] != l[j]) && (l[j] != l[k]) && (l[k] + l[j] > l[i]))
        {
          ans++;
        }
      }
    }
  }
  

  cout << ans << endl;
  return 0;
}