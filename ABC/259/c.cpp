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

vector<pair<char,int>> encode(const string& str){
  int n = (int)str.size();
  vector<pair<char,int>> ret;
  for(int l = 0; l < n;){
    int r = l + 1;
    for ( ; r < n && str[l] == str[r]; r++){}
    ret.push_back({str[l],r-l});
    l = r;
  }
  return ret;
}


bool solve(){
  string s, t;
  cin >> s >> t;
  auto a = encode(s);
  auto b = encode(t);

  if(a.size()!= b.size()) return false;
  
  for (int i = 0; i < (int)a.size(); i++)
  {
    if (a[i].first != b[i].first) return false;
    int al = a[i].second;
    int bl = b[i].second;

    if(al == 1){
      if(bl != 1) return false;
    }else{
      if(bl < al) return false;
    }
  }
  

  return true;
}


int main() {
  
  if(solve()) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}