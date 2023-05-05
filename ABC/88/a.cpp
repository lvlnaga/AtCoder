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
  int n,a;
  cin >> n;
  cin >> a;

  // int ans = 0;
  int tmp = 0;

  tmp = n - (n / 500) * 500;

  if(tmp > a){
    cout << "No" << endl;
  }else{
    cout << "Yes" << endl;
  }
 
  return 0;
}