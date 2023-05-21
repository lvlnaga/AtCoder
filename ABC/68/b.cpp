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

// https://atcoder.jp/contests/abc068/tasks/abc068_b

int main() {
  int n;
  cin >> n;
  
  
  int max_div_num = 0;
  int ans = 1; // 一個も答えがない場合は1が答えになるので

  for (int i = n; i > 0; i--)
  {
    int target = i;
    int div_num = 0;
    while (target > 0)
    {
      if((target % 2) == 0){
        target /= 2;
        div_num ++;
      }else{
        if (max_div_num < div_num)
        {
          max_div_num =  div_num;
          ans = i;
        }
        break;
      }
    }
  } 

  cout << ans << endl;
  return 0;
}