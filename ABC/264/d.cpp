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
  string s;
  cin >> s;

  //幅優先探索
  queue<string> Q;
  Q.push(s);
  map<string, int> mp;
  mp[s] = 0;

  //各文字が頂点、隣り合う文字は辺で接続されている無向グラフと考える
  Graph G(s.size());
  for (int i = 0; i < (int)s.size()-1; i++)
  {
    G[i].push_back(i+1);
    G[i+1].push_back(i);
  }
  
  while(Q.size())
  {
    string current = Q.front(); Q.pop();


    /*     
    for (int i = 1; i < (int)s.size(); i++)
    {
      string next = current;
      swap(next[i-1],next[i]);
      //if(mp.find(next)==mp.end()){//その連想配列が存在するかどうかをチェック findで見つからなかったらendのいてラータが帰ってくるらしい。
      if(mp.count(next)) continue;
        Q.push(next);
        mp[next] = mp[current]+1;
      //}
    }
    */

    for(int v = 0; v < (int)s.size(); v++){
      for (auto u : G[v])
      {
        string next = current;  
        swap(next[u],next[v]);
        if(mp.count(next)) continue; 
        mp[next] = mp[current]+1;
        Q.push(next);
      }
    }
  }
  

  if(mp.count("atcoder") == 0)
  {
    cout << -1 << endl;
  }else
  {
    cout << mp["atcoder"] << endl;
  }

  return 0;
}