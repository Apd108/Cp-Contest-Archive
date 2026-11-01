#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;
  string s;
  cin >> s;
  vector<int>v(26,0);
  for(auto &x:s){
    x=tolower(x);
    x-=97;
    v[x]++;
  }
  for(auto x:v){
    if(x==0){
        cout << "NO";
        return;
    }
  }
  cout << "YES";
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    {
        solve();
    }
    return 0;
}