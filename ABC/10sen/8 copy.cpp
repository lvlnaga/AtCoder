#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <queue>
#include <algorithm>
#include <functional>  
#include <set>
#include <limits.h>

using ll = long long;

using namespace std;



//https://atcoder.jp/contests/arc096/tasks/arc096_a

int main() {
  int a,b,c,x,y;
  cin >> a >> b >> c >> x >> y;
  
  ll ans = LLONG_MAX;
//abピザを全探索する
//足りない分を個別に買う


//ab購入しうる最大枚数は x,yの大きい方の2倍
for (ll i = 0; i <= 201010/*max(x,y)*2*/ ; i++)
{
  ll tmp_ans = 0;

  //abピザかった分だけ加算
  tmp_ans += i*c;

  //足りない分を計算
  ll remain_a = x - i/2;
  ll remain_b = y - i/2;

  //足りない分の購入費用を加算
  if (remain_a > 0)
  {
    tmp_ans += remain_a * a;  
  }
  if (remain_b > 0)
  {
    tmp_ans += remain_b * b;  
  }

  ans = min(ans, tmp_ans); 
  
}



/*
  //a + b < 2c のときは個別に買うのが良い
  if(a + b < 2*c){
    ans = a*x + b*y;
  }else{  //a + b >= 2c のときは　min(a,b) * 2枚だけ c で買って、残りは個別に買う作戦
    int numc = 2 * min(x,y);
    //まずはnumc分をお支払い
    ans += numc * c;

    if (x >= y) //aのほうが多いとき
    {
      //aを個別に買う(足りないa分をお支払い)
      ans += (x-y) * a;
    }
    else//bのほうが多いとき
    {
      //bを個別に買う(足りないb分をお支払い)
      ans += (y-x) * b;
    }
  }
*/  

  cout << ans << endl;
  return 0;
}