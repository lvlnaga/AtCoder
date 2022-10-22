#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <queue>
#include <algorithm>
#include <functional>  
#include <set>

using namespace std;

//https://atcoder.jp/contests/abc061/tasks/abc061_b

//a_m, b_mの中で何回自分が出てくるかカウントすればOK

int main() {
  int n,m;
  cin >> n >> m;

  //道を受け取る（mx2 2次元vectorへ格納）
  vector<vector<int>> path(m,vector<int>(2,0));
  for (int i = 0; i < m; i++)
  {
    cin >> path[i][0] >> path[i][1];
  }
  
  //set(順序付き集合)の変数を用意
  //set型の変数へ入力を格納。
  set<int> pathcount;
  vector<int> v_pathcount(n+1);
  for (int i = 0; i < m; i++)
  {
    v_pathcount[path[i][0]]++;
    v_pathcount[path[i][1]]++;
  }



  //登録されているデータを表示

  for (int i = 1; i <= n; i++)
  {
    cout << v_pathcount[i] << endl;
  }
  return 0;
}