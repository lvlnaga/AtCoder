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

ll facctorialMethod(int k){
    ll sum = 1;
    for (int i = 1; i <= k; ++i)
    {
        sum *= i;
    }
    return sum;
}


int main() {
  ll p;
  cin >> p;

  int ans = 0;
  ll kaijo = 0;
  int i;
  // 1! = 1, 2! = 2, 3! = 6

  // 各コインの枚数を管理.要素数10,すべてに0をセット
  vector<int> coin(11,0);

  while (p>0)
  {
    // p > n!を探す
    for (i = 10; i > 0; i--)
    {
      kaijo = facctorialMethod(i);
      // もし100枚使ってたら、それは使えないのでcontinue
      if (coin[i]>=100)
      {
        continue;
      }
      
      // 最初にpより小さくなったkaijoを見つけて抜ける。
      if(p>=kaijo)
      {
        break;
      }
    }
    
    p = p - kaijo;
    coin[i]++; //コインの枚数を足す
    ans++; //コインの合計も覚えておく
  }
  

  cout << ans << endl;
  return 0;
}