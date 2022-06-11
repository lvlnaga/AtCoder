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
  
/*  
  //正しくinputできているか確認
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
  
  //すべての人に対して、もっとも近い明かりを持った人を探すq
  long long res = 8e18;
  long long mindist[N+1]= {} ;
  for (int i = 0; i <= N; i++)
  {
    mindist[i] = res;
//    cout << mindist[i] << endl;
  }
  
  long long dist;

  for (int i = 1; i <= N; i++)
  {
    for (int j = 1; j <= K; j++)
    {
      long long sx, sy;//明かりの座標格納用
      sx = X[A[j]], sy = Y[A[j]]; //始点にA[i]を格納
      dist = ((X[i] - sx)*(X[i] - sx)) + ((Y[i] - sy)*(Y[i] - sy));
      
      if (mindist[i] > dist)
      {
        mindist[i] = dist;
      }
    }
  //  cout << "mindist = " << mindist[i] << endl;
  }
  
  //mindistの最大値を探す
  long long maxdist=0;
  for (int i = 1; i <= N; i++)
  {
    if (maxdist < mindist[i])
    {
      maxdist = mindist[i]; 
    }
  }

  double ans = sqrt((double)maxdist);

  cout << fixed << setprecision(9) << ans << endl;//18桁出力

  return 0;
} 