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
    int a, b;
    cin >> a >> b;

    int i = 100;

    if ((a * b) % 2 == 0) cout << "Even" << endl;
    else cout << "Odd" << endl;    
}