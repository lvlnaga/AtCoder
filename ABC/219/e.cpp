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

int a[100];

//Card Game for Two


//山札から最大カードを取得して、取得したカードのa[i]を0にする。
int GetMaxCard(int N){
  int max = 0;
  int max_i = 0;

  //最大値を取得
  for (int i = 0; i < N; i++)
  {
    if(max <= a[i]){
      max = a[i];
      max_i = i;
    }
  }
  //取得した最大値を山札から削除
  a[max_i] = 0;

  return max;
}



int main() {
  int N = 0;
  int Alice = 0;
  int Bob = 0;
  
  
  cin >> N;

  //配列初期化
  for(int i = 0; i < 100; i++){
    a[i] = 0;
  }

  //カードを取得
  for (int i = 0; i < N; i++)
  {
    cin >> a[i];
  }
  
  sort(a, a+ sizeof(a), greater<int>());
  
  //ゲーム開始
  //ターンはカードの数 Nだけ
  for(int i = 0; i < N; i++){
    //0,2,4...ターンはAlice
    if(i%2 == 0){//Aliceターン
    Alice += a[i];
    }else{//Bobターン
    Bob += a[i];
    }
  }

  //ゲーム結果
  int ans = Alice - Bob;

  cout << ans << endl;
  return 0;
}