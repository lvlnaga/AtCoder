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

#define MAN 10000
#define GOSEN 5000
#define SEN 1000

//Otoshidama

int main() {
  int N, Y;
  cin >> N >> Y;

  int ans_man = -1, ans_gosen = -1, ans_sen = -1;

  for (int i = 0; i <= N; i++)
  {
    for (int j = 0; i + j <= N; j++)
    {
      int k = N - i - j;
      int total = i * MAN + j * GOSEN + k * SEN;
      if(total == Y) //該当する組み合わせがあれば
        {
          ans_man = i;
          ans_gosen = j;
          ans_sen = k;
        }
    }
  }

  //出力  
  cout << ans_man << " " <<  ans_gosen << " " << ans_sen << endl;
  return 0;
}