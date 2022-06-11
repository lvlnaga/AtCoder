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

//Coins

int main() {
  int n,a,b,c,x;
  cin >> a >> b >> c >> x;
  int sum = 0;
  int ans = 0;

  

  for(int a_i = 0; a_i <= a; a_i++){
    for(int b_i = 0; b_i <= b; b_i++){
      for(int c_i = 0; c_i <= c; c_i++){
        sum = (a_i * 500) + (b_i * 100) + (c_i * 50);
        if(x == sum)
          ans++;
      }
    }
  }

  cout << ans << endl;

  return 0;
}