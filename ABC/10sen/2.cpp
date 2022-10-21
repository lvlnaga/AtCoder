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

//https://atcoder.jp/contests/abc081/tasks/abc081_a

int main() {
  string s;
  cin >> s;

  int counter = 0;
  
  if (s[0] == '1')
  {
    ++counter;
  }
  if (s[1] == '1')
  {
    ++counter;
  }
  if (s[2] == '1')
  {
    ++counter;
  }

  cout << counter << endl;
  return 0;
}