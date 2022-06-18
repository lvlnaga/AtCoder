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
  int n,k;
  cin >> n >> k;

  vector<int> a(n),b(n);

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    b[i] = a[i];
  }

  //bをソートして答えを求める
  sort(b.begin(),b.end());

  //aをルールに則ってやれる限りソートして見る
  bool f = true;
  while (f)
  {
    for (int i = 0; i < n-k-1; i++)
    {
      f = false;
        if (a[i] > a[i+k])
        {
          swap(a[i],a[i+k]);
          f = true;
        }
    }
  }

  if(a == b){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }

  return 0;
}