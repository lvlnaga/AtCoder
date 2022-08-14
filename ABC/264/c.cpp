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
  int h1,w1,h2,w2;
  cin >> h1 >> w1;

  //aの取り込み
  vector<vector<int>> a(h1,vector<int>(w1));
  for (int i = 0; i < h1; i++)
  {
    for (int j = 0; j < w1; j++)
    {
      cin >> a[i][j];
    }
  }
  

  //bの取り込み
  cin >> h2 >> w2;
  vector<vector<int>> b(h2,vector<int>(w2));
  
  for (int i = 0; i < h2; i++)
  {
    for (int j = 0; j < w2; j++)
    {
      cin >> b[i][j];
    }
  }

  
  for (int i = 0; i < (1<<h1); i++) //行のbit全探索
  {
    for (int j = 0; j < (1<<w1); j++)//列のbit全探索
    {
      
      vector<int> hvec,wvec;
      for (int k = 0; k < h1; k++) //何行目を残しておくかhvecへ保存
      {
        if((i & (1 << k)) == 0)
          hvec.push_back(k);
      }
      
      for (int k = 0; k < w1; k++)//何列目を残しておくかhvecへ保存
      {
        if((j & (1 << k)) == 0)
          wvec.push_back(k);
      }

      //ここ何やっているのか不明。 size が違ったら続ける。はわかるけど、
      //そうじゃなかったら続けない。っていうのは書かなくてよいの？
      //<continue文とは>
      //continueはforとかwhileのループの中で処理をスキップさせるために用いる
      //if文と併用され、ループ処理の中である条件が成立する場合それ以下の処理を行わずにスキップする。
      //じゃあskip文とかのほうがしっくり来る。
      //<つまりここでは？>
      //選択した行、列のサイズがターゲットのサイズと一致してなければ以降のマッチ確認は不要だよ。の意味
      if( (int)hvec.size() != h2 || (int)wvec.size() != w2) continue; 
  
      bool match = true;

      for (int k = 0; k < h2; k++)
      {
        for (int l = 0; l < w2; l++)
        {
          if (a[hvec[k]][wvec[l]] != b[k][l])
          {
            match = false;
          }
        }
      }
      
      if(match) //見つかったらその時点で終了しちゃう
      {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }

  cout << "No" << endl;
  return 0;
}