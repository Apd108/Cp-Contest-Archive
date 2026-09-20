#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;
  vector<int>v(n);
  int o=0,z=0;
  for(auto &x:v){
    cin >> x;
    o+=x==1;
    z+=x==0;
  }  
  if(o>=z) cout << "Bessie" << '\n';
  else cout << "Elsie" << '\n';
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}