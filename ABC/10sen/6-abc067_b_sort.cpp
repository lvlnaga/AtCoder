
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <queue>
#include <algorithm>
#include <functional>  //これが必要

using namespace std;
//https://atcoder.jp/contests/abc067/tasks/abc067_b

int main() {
  int n,k;
  
  //入力の受け取り
  cin >> n >> k;

  vector<int> l(n);
  for (int i = 0; i < n; i++)
  {
    cin >> l[i];
  }
  
  //降順sort
  sort(l.begin(),l.end(),greater<int>());
  
  //sortしたうち、先頭からk本目までを加算
  int sum = 0;
  for (int i = 0; i < k; i++)
  {
    sum += l[i];
  }
  
  cout << sum << endl;
  return 0;
}