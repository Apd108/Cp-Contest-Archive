#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;
  int o=0,e=0;
  vector<int>v(n);
  for(auto &x:v){
    cin >> x;
    o+=x%2==1;
    e+=x%2==0;
  }  
  if(o==1 && e==1 || o==3 && e==0) cout << "Larpity" << '\n';
  else cout << "Moggity" << '\n';
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