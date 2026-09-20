#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  string s;
  cin >> s;
  int i=1;
  for(auto x:s){
    s.insert(s.begin()+i,'o');
    i+=2;
  }
  s.pop_back();
  cout << s;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    {
        solve();
    }
    return 0;
}