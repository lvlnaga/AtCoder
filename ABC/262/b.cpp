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
  int n,m;
  cin >> n >> m;
  vector<vector<bool>> graph(n, vector<bool>(n));

  //無向グラフを隣接行列で管理
  //計算量は O(n^2 + m)
  for (int i = 0; i < m; i++)
  {
    int u,v;
    cin >> u >> v;
    u -= 1; v -= 1; //添字を0から始めるので頂点もそれに合わせて-1して扱う
    graph[u][v] = graph[v][u] = true;
  }
  

  //三角形があるか探す
  //計算量はO(N^3)
  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = i+1 ; j < n; j++)
    {
      for (int k = j + 1; k < n; k++)
      {
        if(graph[i][j] and graph[j][k] and graph[k][i]){
          ans ++;
        }
      }
    }
  }
  cout << ans << endl;

  return 0;
}