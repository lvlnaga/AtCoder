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
  int q;
  cin >> q;
  vector <int> s;
  int query,arg1,arg2;
  for (int i = 0; i < q; i++)
  {
    query = arg1 = arg2 = 0; //初期化
    
    cin >> query;
    if(query == 1){
      cin  >> arg1;
      s.push_back(arg1);
    }else if(query == 2){
      cin >> arg1; //x
      cin >> arg2; //c

      size_t n_count = count(s.begin(),s.end(),arg1);
      int loop = min(arg2, (int)n_count); //

      auto itr = s.begin();
      while (itr != s.end())
      {
        if((*itr) == arg1)
        {
            itr = s.erase(itr);
            loop --;
        }
        else
        {
            itr++;
        }
        if(loop <= 0){
          break;
        }
      }
    }else if(query == 3){
      int s_max = *max_element(s.begin(), s.end());
      int s_min = *min_element(s.begin(), s.end());
      
      cout << s_max - s_min << endl;
      
    }else{
      cout << "error" << endl;
    }
  }
  return 0;
}