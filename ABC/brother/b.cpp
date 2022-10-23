#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <queue>
#include <algorithm>
#include <functional>  
#include <set>
#include <limits.h>
#include <cmath>

using ll = long long;

using namespace std;

//任意の桁を四捨五入する関数
ll digit_round(ll num, ll k){
  double target = num;          //e.g. num = 123
  ll target_digit = pow(10,k+1);  //四捨五入対象の桁を取得 k = 1のときは 10の位, ただし10の位を小数点1に持っていきたいのでk+1して100を作る
  target /=  target_digit;      //10のくらいを小数点1位に持ってくる。つまり 100で割る  123 -> 1.23
  target = round(target);       //少数1位で四捨五入
  target *= target_digit;       //桁を戻す
  return (ll)target;
}

int main() {
  ll x,k;
  cin >> x >> k;

  for (ll i = 0; i < k; i++)
  {
    x = digit_round(x,i);
  }
  
  cout << x << endl;
  return 0;
}