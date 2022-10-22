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

//https://atcoder.jp/contests/abc088/tasks/abc088_b


//渡されたvectorの要素を返す。vectorの末尾の要素は削除される。
int getCard(vector<int>& a){
  int card = a.back();
  a.erase(a.end()-1);
  return card;
}

int main() {
  int n;
  int Alice = 0;
  int Bob = 0;
  //入力の受け取り
  cin >> n;

  vector<int> a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  
  //sort
  sort(a.begin(),a.end());
  
  //0,2,4,...iが偶数のときはalice,奇数のときはbob

  for (int i = 0; i < n; i++)
  {
    if (i % 2 == 0) //Aliceのターン
    {
      Alice += getCard(a);
    }
    else //Bobのターン
    {
      Bob += getCard(a);
    }
  }

  int ans = Alice - Bob;

  cout << ans << endl;
  return 0;
}