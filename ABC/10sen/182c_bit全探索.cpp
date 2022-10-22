#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <queue>
#include <algorithm>
#include <functional>  
#include <set>

using namespace std;

//https://atcoder.jp/contests/abc067/tasks/abc067_b

int main() {
  int n;
  cin >> n;

  vector<int> t(n+1);
  vector<int> x(n+1);
  vector<int> y(n+1);

  //最初の座標を予め登録(0秒のとき(0,0)にいる)
  t[0] = x[0] = y[0] = 0;

  for (int i = 1; i <= n; i++)
  {
    cin >> t[i] >> x[i] >> y[i];
  }
  
  bool is_able = true; //到達可能かどうかフラグ

  //最初から最後の移動までfor分で条件チェック
  for (int i = 1; i <= n; i++)
  {
    //条件1: パリティ→経過時間が奇数のときは、 座標を足したときも奇数
    if ((t[i]  % 2) != (x[i] + y[i]) % 2)
    {
      is_able = false;
    }
    //条件2: 距離
    if (abs(t[i]-t[i-1]) < (abs(x[i]-x[i-1]) + abs(y[i]-y[i-1])))
    {
      is_able = false;
    }
  }
  

  if (is_able)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
  
  return 0;
}