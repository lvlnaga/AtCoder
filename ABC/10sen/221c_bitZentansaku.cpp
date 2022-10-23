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
/* 
stringで取得する
stringをint型に変換することはできる？
→stoi関数でいける。(charからの変化ならatoi)。istringstreamでもいける。

[x]string型で取得する
[]bit全探索で分ける
[]分けたパターンの中で一番でかい数字をそれぞれint型にする
  []大きい数字から一桁目に入れていくみたいな？
[]残りの一個が0になってたらcontinueする
[]分けた数字を掛け算して maxとして残しておく。
 */
  int max = 0, seki = 0;
  string n;
  cin >> n;

  //bit全探索
  for (int bit = 0; bit < (1<<n.size()); bit++)
  {
    vector<int> A,B;
    for (int i = 0; i < (int)n.size(); i++)
    {
      if (bit & (1<<i))
      {
        A.push_back((int)(n[i]-'0'));
      }else
      {
        B.push_back((int)(n[i]-'0'));
      }
    }

    //sortする
    sort(A.begin(),A.end(),greater<int>());
    sort(B.begin(),B.end(),greater<int>());

    int numA =0;
    int numB=0;

    for (int i = 0; i < (int)A.size(); i++)
    {
      numA += A[i] * pow(10,(int)A.size()-i-1);
    }
    
    for (int i = 0; i < (int)B.size(); i++)
    {
      numB += B[i] * pow(10,(int)B.size()-i-1);
    }
    
    if (numA == 0 || numB == 0) continue;
    
    seki = numA * numB;

    if (max < seki)
    {
      max = seki;
    }
  }
  

  cout << max << endl;
  return 0;

}