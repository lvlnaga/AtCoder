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

string divide[4] = {"dream", "dreamer", "erase", "eraser"};

int main() {
  string S;
  cin >> S;

  //後ろから解くために文字列を左右反転する。
  //前からだと切れ目がわからない。"dream" "dreamer"は途中まで一緒。 prefixともいう
  //後ろからなら大丈夫

  reverse(S.begin(), S.end());
  for (int i = 0; i < 4; i++)
  {
    reverse(divide[i].begin(),divide[i].end());
  }
  
  //できたかどうかフラグ
  bool can_f = true;
  //端から切っていく
  for (int i = 0; i < (int)S.size(); )
  {
    bool cut_f = false; //切り取り成功したかのフラグ
    for (int j = 0; j < 4; j++) //4種の文字列で一致するやつがないか確認する。
    {
      //文字列比較
      if(S.substr(i,divide[j].size()) == divide[j]) //切り出した文字列と一致するかどうか
      {
        //一致したら次の文字までiを進める。
        i += divide[j].size();
        //切り取り成功したのでフラグ立てる
        cut_f = true;
      }
    }
    //4種の文字列で一致するのがない場合は終了
    if(!cut_f){//切り取り失敗したら
      can_f = false; //失敗を出力するために、できないよ。とフラグ立てる
      break; //ループ抜ける
    }
  }
  if (can_f)
  {
    cout << "YES" << endl;
  }
  else
  {
    cout << "NO" << endl;
  }
  
  return 0;
}