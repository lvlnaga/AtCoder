#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <queue>
#include <algorithm>
#include <functional>  
#include <set>

using namespace std;

//https://atcoder.jp/contests/abc085/tasks/abc085_b

int main() {
  int n;
  cin >> n;

  //dを受け取る
  vector<int> d(n);
  for (int i = 0; i < n; i++)
  {
    cin >> d[i];
  }
  
  //set(順序付き集合)の変数を用意
  //set型の変数へ入力を格納。
  set<int> s;
  for (int i = 0; i < n; i++)
  {
    s.insert(d[i]);
  }
  
  int ans =s.size();

  cout << ans << endl;
  return 0;
}