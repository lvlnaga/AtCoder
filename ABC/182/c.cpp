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

/* 
[]Nを入力
[]bit全探索する(消す0, 残す1)
  []残すbitの桁をvectorへpush_back
  []消したbit数をおぼえておく
  []残すbitから数字を復元
  []3の倍数になるかチェック
  []3の倍数になったらその時の消した桁数が最小化チェックして、最小なら保存。
 */


int main() {
  
  string n;
  ll min_k = LLONG_MAX;
  cin >> n; //文字列として取得

  //桁を逆にする必要があるのでは。
  reverse(n.begin(),n.end());

  //bit全探索 2進数をforで作る。num= (000...0）~ (111...1)
  // nが4なら　0000 ... 10000までを試すことになる。
  for (int bit = 0; bit < (1<<n.size()); bit++)
  {
    vector<int> v;
    ll delete_digit=0;
    for (int i = 0; i < (int)n.size(); i++)
    {
      if (bit & (1<<i))//000...01を順番にシフトしながら何番目のビットが立っているかを探索している
      {                 //立っているビットは残す桁
        v.push_back((int)(n[i]-'0'));//残す桁 charをintに変換してvectorへ格納
      }
      else
      {
        delete_digit++;//消す桁をカウント
      }
    }

    if (delete_digit == (ll)n.size())
    {
      continue; //全消しはカウントしちゃだめ
    }
    

    //数字を復元
    ll number = 0;
    for (int i = 0; i < (int)v.size(); i++)
    {
      number += v[i] * powl(10,i);
    }
    
    //3の倍数になるかチェック
    if((number % 3) == 0){
      if (min_k > delete_digit)
      {
        min_k = delete_digit;
      }
    }
  }
  
  
  
  if (min_k == LLONG_MAX)
  {
    cout << -1 << endl;
  }
  else
  {
    cout << min_k << endl;
  }

  return 0;
}