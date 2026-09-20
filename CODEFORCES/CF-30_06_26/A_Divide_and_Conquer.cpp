#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int x,y;
  cin >> x >> y;
  if(x%y==0) cout << "YES" << '\n';
  else cout << "NO" << '\n'; 
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