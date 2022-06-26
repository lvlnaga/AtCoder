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
  int w,h;
  cin >> h >> w;
  vector <string> line(h);
  char target = 'o';
  int now = 0;
  int gyo[2],retsu[2];
  
  string tmp = "null";

  for (int i = 0; i < h; i++)
  {
    cin >> line[i];
    for (int j = 0; j < w; j++)
    {
      if(target == (char)line[i][j]){
        gyo[now] = i;
        retsu[now] = j;
        now ++;
      }
    }
  }

  int ans = 0;

  ans = abs(gyo[0]-gyo[1]) + abs(retsu[0]-retsu[1]);

  cout << ans << endl;
  return 0;
}