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
  int n;
  cin >> n;
  int a[n] = {0};
  int masu[4] = {0};
  int p = 0;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  for (int i = 0; i < n; i++)
  {
    //マス0にコマを置く
    masu[0] = 1;

    //コマを マスx + a[i]に移動する。
    for (int j = 3; j >= 0; j--)
    {
      if (masu[j] == 1) //マスに駒があるとき
      {
        masu[j] = 0; //駒を取得 (どうせ移動させるのでクリアしとく)
        int idosaki = j + a[i]; //駒の移動先を計算
        if (idosaki > 3) //移動先が3以上だったら
        {
          p++; //pをインクリメント
        }
        else //移動先がOKのときは
        {
          masu[idosaki] = 1; //移動先に駒をセット
        }
      }
      else{ // マスに駒がないとき
        //何もしない。
      }
    }
  }

  cout << p << endl;
  return 0;
}