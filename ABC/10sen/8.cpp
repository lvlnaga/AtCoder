#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <queue>
#include <algorithm>
#include <functional>  
#include <set>

using namespace std;

#define man   10000
#define gosen 5000
#define sen   1000

//https://atcoder.jp/contests/abc085/tasks/abc085_c

int main() {
  int n,y;
  cin >> n >> y;

  //2重ループでmanとgosenの枚数で全探索すれば求められる。
  
  for (int i = 0; i <= n; i++)
  {
    for (int j = 0; j <= (n - i); j++)
    {
      int k = n - i - j; //1000円の枚数
      int sum = man * i + gosen * j + sen * k;   //合計金額
      
      if (sum == y)//合計金額が Y円となる場合はその枚数を出力して終了
      {
        cout << i << " " << j << " " << k << endl;
        return 0;
      }
    }
  }
  
  //存在しない場合は"-1 -1 -1"を出力
  cout << -1 << " " << -1 << " " << -1 << endl;
  return 0;
}