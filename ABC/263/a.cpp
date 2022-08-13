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
  int one, two,count_one, count_two;
  vector<int> v(5);
  //cin >> one;
  string ans = "Yes";
  for (int i = 0; i < 5; i++)
  {
    cin >> v[i];    
  }
  
  sort(v.begin(),v.end());
  count_one =  count_two = 0;
  one = v[0];
  two = v[4];
  
  if(one == two){
    ans = "No";
  }

  for (int i = 0; i < 5; i++)
  {
    if(one == v[i]){
      count_one ++;
    }else if(two == v[i]){
      count_two ++;
    }else{
      ans = "No";
    }
  }

  if(count_one > 3 or count_two > 3)
    ans = "No";

  cout << ans << endl;
  return 0;
}