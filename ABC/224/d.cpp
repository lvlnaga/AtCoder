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
  int m;
  cin >> m;
  Graph G(10);//グラフ格納用(m x *)の2次元配列を用意
  int u,v;
  //グラフの辺の情報を格納
  for (int i = 1; i <= m; i++)
  {
    cin >> u >> v;
    G[u].push_back(v);
    G[v].push_back(u);
  }
  
  //駒の情報を格納
  int p;
  string s = "999999999";
  for (int i = 1; i <= 8; i++)
  {
    cin >> p;
    s[p-1] = i+'0'; //char型に変換して格納
  }
  

  //幅優先探索
  queue<string> Q;  //string型のものを放り込めるqueueを宣言。
  Q.push(s);        //今のコマの配置をqueueへ格納。
                    //pushがちゃんとわかっていない。全部一気に保存できるのか？
  map<string, int> mp; //連想配列。複数のキーとバリューの組み合わせで配列管理できる。キーは文字列の並び
  mp[s] = 0; //今の駒の並びは0ステップで到達しているので0を格納している。

  while (Q.size())//Qが0になるまでループするっぽい
  {
    string s = Q.front(); Q.pop(); //?　Qの先頭をはsへ入れて、Qから出しているっぽい。
    
    for(int i = 1; i<=9; i++) //駒が乗ってない頂点を探してその頂点をvへ格納している
    {
      if(s[i-1] == '9')
        v = i;
    }
    
    /* 
    移動可能なパターン全部試して、
    移動後の状態をqueueへ格納している。
    そのとき、移動後の状態をなんステップで到達するか
     */
    for (auto u : G[v]) //駒が乗っていない頂点vから出ている辺を探している。(頂点vとつながっている別の頂点をさがしている。)
    {//駒を移動できる分だけ全部試している。
      string t = s; //今の駒の並びをtへ格納
      swap(t[u-1],t[v-1]); //駒の配置を交換
      if(mp.count(t)) continue; 
                                //たぶん、その文字列のならびを過去に試していたら
                                //そいつはもうキューにすでに積まれているので、もう調査不要。
                                //という意味だとおもう。
                                //count()はその連想配列が存在しているかどうか を返す。
      mp[t] = mp[s] + 1;//なんステップやったかを記憶している感じ？
      Q.push(t);//ここもよくわからん。 //その文字の並びをキューに積んでおいて、次また試す。
    }
  }
  

  if(mp.count("123456789") == 0) //全部探索したけど該当するパターンがなかった状態
  {
    cout << -1 << endl;
  }else
  {
    cout << mp["123456789"] << endl; //なんステップで到達したかをチェックする。
  }
  return 0;
}