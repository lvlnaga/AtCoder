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

int kfunction(int k)
{
  if (k == 0)
  {
    return 1;
  }
  else
  {
    return k * kfunction(k - 1);
  }
}

int main()
{
  int n,m;
  cin >> n >> m;

  //地図の受け取り

  //1行ずつstringのvectorに格納
  vector<string> input_s(n);
  for (int i = 0; i < n; i++)
  {
    cin >> input_s[i];
  }
  
  //1文字ずつ stringの2次元vectorへ格納
  vector<vector<string>> map(n, vector<string>(m));
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      map[i][j] = input_s[i][j];
    }
  }
  
  //ここから操作

  



  int ans = 0;



  cout << ans << endl;
  return 0;
}