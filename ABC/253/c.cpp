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
  //vector <int> s;
  multiset <int> s;
  int query,arg1,arg2;
  for (int i = 0; i < q; i++)
  {
    query = arg1 = arg2 = 0; //初期化
    
    cin >> query;
    if(query == 1){
      cin  >> arg1;
      s.insert(arg1);

    }else if(query == 2){
      cin >> arg1; //x
      cin >> arg2; //c

      //size_t n_count = count(s.begin(),s.end(),arg1);
      //int loop = min(arg2, (int)n_count); //
      
      for (int i = arg2; i > 0; i--)
      {
        if(s.find(arg1) == s.end()) break;
        s.erase(s.find(arg1));
        
      }
      


      /* while ( arg2-- && find(s.begin(), s.end(), arg1) != s.end())
      {
        s.erase(find(s.begin(),s.end(),arg1));
      } */
    }else if(query == 3){
      int s_max = *s.rbegin();
      int s_min = *s.begin();
      
      cout << s_max - s_min << endl;
      
    }else{
      cout << "error" << endl;
    }
  }
  return 0; 
}