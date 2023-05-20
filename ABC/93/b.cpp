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

// https://atcoder.jp/contests/abc093/tasks/abc093_b

int main() {
  int a, b, k;
  cin >> a >> b >> k;

  int count_num = b-a+1; //a~bの間にある数
  // 3-8.. 3,4,5,6,7,8 →　6個
  int count = 0; 

  for (int i = a; i <= b ; i++)
  {
    if (count < k || (count_num - k) <= count )
    {
      cout << i << endl;
    }
    
    count++;
  }
  
  return 0;
}