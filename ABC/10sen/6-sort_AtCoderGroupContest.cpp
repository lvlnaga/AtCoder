
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <queue>
#include <algorithm>
#include <functional>  

using namespace std;

//https://atcoder.jp/contests/agc012/tasks/agc012_a

int main() {
  int n;
  
  //入力の受け取り
  cin >> n ;

  int threeN = 3*n;

  vector<int> a(threeN);
  for (int i = 0; i < threeN; i++)
  {
    cin >> a[i];
  }
  
  //降順sort
  sort(a.begin(),a.end(),greater<int>());
  

  /*
  //チーム用2次元配列を作成(nx3)
  vector<vector<int>> team(n, vector<int>(3));

  //チームを割り振り
  for (int i = 0; i < threeN; i++)
  {
    //team[i%n].push_back(a[i]);
    team[i%n][i/n] = a[i];
  }
  
  //各チームの2番目の人をansへ加算
  long long ans = 0;

  for (int i = 0; i < n; i++)
  {
    ans += team[i][1];
  }
  */

//2,4,6,...2n番目の人の和が答えにになる。

long long ans = 0;

for (int i = 0; i < 2*n; i++)
{
  if (i % 2 == 1) //1から始まって偶数番目の人を足したい⇒0から始まって奇数番目の人を足せばよい
  {
    ans += a[i];
  }
}


  cout << ans << endl;
  return 0;
}