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
  int h[4],w[4];
  int a[4][4]= {0};
  int h1[31][4]= {0},h2[31][4]= {0},h3[31][4]= {0},w1[31][4]= {0},w2[31][4]= {0},w3[31][4]= {0};
  int tmp =0;
  for (int i = 1; i <= 3; i++)
  {
    cin >> h[i];
  }
  for (int i = 1; i <= 3; i++)
  {
    cin >> w[i];
  }
  int tmp1=0;
  for (int i = 1; i < h[1]; i++)
  {
    for (int j = 1; j < h[1] - i; j++)
    {
      if((h[1] - i - j) > 0){
        h1[tmp1][1] = i;
        h1[tmp1][2] = j;
        h1[tmp1][3] = h[1] - i -j;
        tmp1++;
      }
    }
  }
  int tmp2=0;
  for (int i = 1; i < h[2]; i++)
  {
    for (int j = 1; j < h[2] - i; j++)
    {
      if((h[2] - i - j) > 0){
        h2[tmp2][1] = i;
        h2[tmp2][2] = j;
        h2[tmp2][3] = h[2] - i -j;
        tmp2++;
      }
    }
  }
  int tmp3=0;
  for (int i = 1; i < h[3]; i++)
  {
    for (int j = 1; j < h[3] - i; j++)
    {
      if((h[3] - i - j) > 0){
        h3[tmp3][1] = i;
        h3[tmp3][2] = j;
        h3[tmp3][3] = h[3] - i -j;
        tmp3++;
      }
    }
  }
  
  int ans = 0;

  for (int i = 0; i < tmp1; i++)
  {
    for (int j = 0; j < tmp2; j++)
    {
      for (int k = 0; k < tmp3; k++)
      {
        if(h1[i][1] + h2[j][1] + h3[k][1] == w[1] &&
            h1[i][2] + h2[j][2] + h3[k][2] == w[2] &&
              h1[i][3] + h2[j][3] + h3[k][3] == w[3])
                ans ++;
      }
      
    }
    
  }
  
  cout << ans << endl;
  return 0;
}