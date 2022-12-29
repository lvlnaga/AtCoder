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

/* 移動用関数 */
//北へ移動(y--)
int movN(int *x, int *y)
{
  *y -= 1;
  return 0;
}
//南へ移動(y++)
int movS(int *x, int *y)
{
  *y += 1;
  return 0;
}
//東へ移動(x++)
int movE(int *x, int *y)
{
  *x += 1;
  return 0;
}
//西へ移動(x--)
int movW(int *x, int *y)
{
  *x -= 1;
  return 0;
}

/* メイン関数 */
int main()
{
  /* 入力の受け取り */
  int n, m;
  cin >> n >> m;

  //地図の受け取り
  // 1行ずつstringのvectorに格納
  vector<string> input_s(n);
  for (int i = 0; i < n; i++)
  {
    cin >> input_s[i];
  }

  // 1文字ずつ stringの2次元vectorへ格納
  vector<vector<string>> map(n, vector<string>(m));
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      map[i][j] = input_s[i][j];
    }
  }

  /* 移動処理 */
  int now_x = 0, now_y = 0; //初期座標
  string now_d;             //現在の床が示す方角
  int ans_count = 0;        //移動距離を記憶
  bool isFinished = false;  //終了条件

  while (!isFinished)
  {
    now_d = map[now_y][now_x]; //現在の方角を取得

    map[now_y][now_x] = "##"; //通過済みの座標は#でチェックを入れる

    if (now_d == "N")
    {
      movN(&now_x, &now_y);
    }
    else if (now_d == "S")
    {
      movS(&now_x, &now_y);
    }
    else if (now_d == "E")
    {
      movE(&now_x, &now_y);
    }
    else if (now_d == "W")
    {
      movW(&now_x, &now_y);
    }
    else if (now_d == "##") //通過済みなのでここで終了
    {
      isFinished = true;
      ans_count--; //通過済みのところへ移動した分はカウントしないため一つ戻す。
    }
    else // N,S,E,W以外の文字が登録されていた場合
    {
      cerr << "error: wrong direction is set" << endl;
    }

    ans_count++; //移動距離を加算

    /* ゴールしたかどうか判定 */
    // x,yがn,mからはみ出しているかチェックしてisFinishedを更新
    if (now_x < 0 || m <= now_x) // xのチェック
    {
      isFinished = true;
    }
    if (now_y < 0 || n <= now_y) // yのチェック
    {
      isFinished = true;
    }
  }
  
  /* 答えの出力 */
  cout << ans_count << endl;

  return 0;
}