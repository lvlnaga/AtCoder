#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n+1); i++)
#define SIZE_OF_ARRAY(array) (sizeof(array)/sizeof(array[0]))


using ll = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;
using mint = modint1000000007;
int d[110];


int main() {
  int N;
  int min = 101;
  int ans = 0;

  //入力
  cin >> N;

  for (int i = 0; i < N; i++)
  {
    cin >> d[i];
  }
  
  //降順ソート
  sort(d, d + 110, greater<>());

  //mixを何回更新したかを考えればOK
  for (int i = 0; i < N; i++)
  {
    if(min > d[i]){
      min = d[i];
      ans ++;
    }
  }
  cout << ans << endl;
  return 0;
}