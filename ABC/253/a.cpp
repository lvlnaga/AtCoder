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
  int b;
  vector<int> a(2);
  cin >> a[0] >> b >> a[1];

  sort(a.begin(),a.end());
  string ans = "No";


  if(a[0] == b && b == a[1]){
    ans = "Yes";
  }else if(a[0] <= b && b <= a[1]){
    ans = "Yes";
  }   

  cout << ans << endl;
  return 0;
}