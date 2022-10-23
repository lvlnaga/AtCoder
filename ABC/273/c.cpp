#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <queue>
#include <algorithm>
#include <functional>  
#include <set>
#include <limits.h>
#include <cmath>

using ll = long long;

using namespace std;


/* 集合の使い方
    宣言
    std::set<int> st;  //  int 型の順序付集合 st の宣言
    挿入
    std::set<int> st{3, 1, 4};
    st.insert(2);   //  値 2 を追加
    要素数の取得
    std::set<int> st{3, 1, 4};
    cout << st.size() << "\n";
*/

int main() {
  int n;
  cin >> n;

  vector<int> a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  //中間答え格納用 vector
  vector<int> syurui(n);

  for (int i = 0; i < n; i++)
  {
    int target = a[i];
    set<int> st;  //答えを格納するための集合
    //aの中でtargetより大きい数字を探す
    for (int j = 0; j < n; j++)
    {
      if (target < a[j])
      {
        //大きい数字は集合へ入れる
        st.insert(a[j]);
      }
    }
    //探索終了したら、集合に入っている要素数が答え
    //cout << st.size() << endl;
    syurui[i] = (int)st.size();
  }

  //syuruiのなかで書く数字をカウントする 0は何個、1は何個...kは何個
  vector<int> ans(n,0);
  for (int i = 0; i < n; i++)
  {
    ans[syurui[i]] ++;
  }
  
  for (int i = 0; i < n; i++)
  {
    cout << ans[i] << endl;
  } 

  return 0;
}