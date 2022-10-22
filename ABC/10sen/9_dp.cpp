#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <queue>
#include <algorithm>
#include <functional>  
#include <set>

using namespace std;
//https://atcoder.jp/contests/abc067/tasks/abc067_b

//分割対象
string devide[4] = {"dream","dreamer","erase","eraser"};

int main() {
  string s;
  cin >> s;

  //前からだと被っちゃうので後ろから考えるらしい。
  //とりあえず文字列をすべて反転させる
  reverse(s.begin(),s.end());
  for (int i = 0; i < 4; i++)
  {
    reverse(devide[i].begin(),devide[i].end());
  }
  
  //sを後ろからチェックして一致しているかどうか
  bool can = true;
  for (int i = 0; i < (int)s.size(); )
  {
    //どれかの候補でdevideできるか
    bool can_devide = false;
    for (int j = 0; j < 4; j++)
    {
      //string同士の文字列比較は"=="でOK
      //stringの文字列切り抜きは? s.substr(開始位置(s.begin()), 長さ)
      //はじめからdevideの長さで一致すればOK
      if(s.substr(i,devide[j].size()) == devide[j]){
        //一致するものがあれば、その分iを進める
        i += devide[j].size();
        //一致するものがあれば次に進めるので次に進めるフラグを立てておく
        can_devide = true;
      }
    }
    //4つチェックして切れるやつがなかったら修了
    if(!can_devide){
      can = false;
      break;
    }
  }
  
  if(can) cout << "YES" << endl;
  else cout << "NO" << endl;

  return 0;
}