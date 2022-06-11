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

  //入力
  int N,K;
  cin >> N >> K;

  int A[K+1];
  //Aをinput, A[1]...A[K]までつめる
  for (int i = 1; i <= K; i++)
  {
    cin >> A[i];
  }
  //X[i], Y[i]をinput
  long long X[N+1],Y[N+1];
  for (int i = 1; i <= N; i++)
  {
    cin >> X[i] >> Y[i];
  }
  
  
  //正しくinputできているか確認
  /*
  for (int i = 1; i <= K; i++)
  {
    cout << "A[" << i << "]= " << A[i] << "  ";
  }
  cout << endl;

  for (int i = 1; i <= N; i++)
  {
    cout << "X=" << X[i] << ", Y=" << Y[i] << endl;
  }
  cout << "=====================" << endl;
*/

  //距離を計算
  
  long long dist, maxdist[K+1]; //計算した距離格納用
  for (int i = 0; i <= K; i++)
  {
    maxdist[i] = 0;
  }
  
  for (int i = 1; i <=K ; i++)
  {
  cout << i <<"=====================" << endl;
    long long sx, sy;//始点格納用
    sx = X[A[i]], sy = Y[A[i]]; //始点にA[i]を格納
    cout << "sx=" << sx << ", sy=" << sy << endl;
    //その他の点との距離を計算
    for (int j = 1; j <= N; j++)
    {
      //dist =  (sx - X[i])^2 + (sy - Y[i]))^2 を計算
      dist = (sx - X[j])*(sx - X[j]) + (sy - Y[j])*(sy - Y[j]);
      cout << "dist = " << dist << endl;
      //最大値を保存
      if (dist > maxdist[i])
      {
        maxdist[i] = dist;
      }
    }
  cout << "maxdist = " << maxdist[i] << endl;
  }
  
  //maxdistの中の最小値を計算して出力
  long long minmaxdist=maxdist[1];
  for(int i=1; i<=K;i++ ){
    if(minmaxdist>maxdist[i])
      minmaxdist = maxdist[i];
  }
  //cout << minmaxdist << endl;

  double ans = sqrt((double)minmaxdist);

  //cout << "ans = " << fixed << setprecision(9) << ans <<endl;//18桁出力
  cout << fixed << setprecision(9) << ans << endl;//18桁出力

  //282842.712474619009
  return 0;
} 