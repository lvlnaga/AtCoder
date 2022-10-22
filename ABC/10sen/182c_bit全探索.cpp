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
using ll = long long;
using namespace std;

//https://atcoder.jp/contests/abc067/tasks/abc067_b

int main() {
  string n;
  cin >> n;
  ll min_k = LLONG_MAX;

  for (int bit = 0; bit < 1<<n.size(); bit++)
  {
    vector<int> remainDigit; //残す桁
    ll numOfDeleteDigit=0;//消す桁数
    //残す桁を記憶
    for (int i = 0; i < (int)n.size(); i++)
    {
      if (bit & (1<<i)) //一個ずつbitをずらして残すやつを拾いあつめる
      { //立っているbitの場合
        remainDigit.push_back(n[i]-'0'); // s[i]-'0' でchar型をintで格納できる
      }
      else
      {
        numOfDeleteDigit++;
      }
    }
    
    if (numOfDeleteDigit == (ll)n.size())
    {
      continue; //全消しはスキップ
    }
    
    //数字を復元
    ll number = 0;
    for (int i = 0; i < (int)remainDigit.size(); i++)
    {
      number += remainDigit[i] * powl(10,(ll)n.size()-i);
    }
    
    //3の倍数になるかチェック
    if (number % 3 == 0)
    {
      if (min_k > numOfDeleteDigit)
      {
        min_k = numOfDeleteDigit;
      }
    }
  }
  

  if (min_k == LLONG_MAX)
  {
    cout << -1 << endl;
  }
  else
  {
    cout << min_k << endl;
  }
  
  
  return 0;
}