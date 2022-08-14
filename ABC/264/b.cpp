#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)
using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;
using mint = modint1000000007;

int main() {
  int r, c;
  cin >> r >> c;
  bool ans = false; //f = white, t = black
  r -= 1; c -= 1;
  if (r == 0 or c == 0)
  {
    ans = true;
  }
  else if ((r == 2 && 2 <= c && c <= 12) or (c == 2 && 2 <= r && r <= 12))
  {
    ans = true;
  }
  else if ((r == 4 && 4 <= c && c <= 10) or (c == 4 && 4 <= r && r <= 10))
  {
    ans = true;
  }
  else if ((r == 6 && 6 <= c && c <= 8) or (c == 6 && 6 <= r && r <= 8))
  {
    ans = true;
  }
  else if ((r == 8 && 6 <= c && c <= 8) or (c == 8 && 6 <= r && r <= 8))
  {
    ans = true;
  }
  else if ((r == 10 && 4 <= c && c <= 10) or (c == 10 && 4 <= r && r <= 10))
  {
    ans = true;
  }
  else if ((r == 12 && 2 <= c && c <= 12) or (c == 12 && 2 <= r && r <= 12))
  {
    ans = true;
  }
  if (r == 14 or c == 14)
  {
    ans = true;
  }

  if (ans)
  {
    cout << "black" << endl;  
  }else{
    cout << "white" << endl;  
  }
  
  
  return 0;
} 