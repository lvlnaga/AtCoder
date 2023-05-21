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

ll dec_henkan(string str, int k)
{
  ll ret = 0;
  // 処理しやすいように逆順にする
  reverse(str.begin(),str.end());
  // k進数を10進数に変換
  for (int i = 0; i < (int)str.length(); i++)
  {
    // 文字列から数値への変換
    int val = str[i] - '0';
    // val * k ^ i 
    ret += val * (int)pow(k,i);
  }
  return ret;
}

int main() {
  ll k,a,b;
  cin >> k >> a >> b;

  string str_a = to_string(a);
  string str_b = to_string(b);

  ll a_dec, b_dec;

  a_dec = dec_henkan(str_a,k);
  b_dec = dec_henkan(str_b,k);
  
  cout << a_dec * b_dec << endl;

  return 0;
}