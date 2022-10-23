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
  int n;
  cin >> n;
  
  int ans = kfunction(n);

  cout << ans << endl;
  return 0;
}