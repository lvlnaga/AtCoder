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
  int k, a, b;
  cin >> k >> a >> b;

  for (int i = a; i <= b; i++)
  {
    if(i % k == 0){
      cout << "OK" << endl;
      return 0;
    }
  }
  
  cout << "NG" << endl;
  return 0;
}