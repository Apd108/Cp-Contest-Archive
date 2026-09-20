#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int x,y;
  cin >> x >> y;
  int ans=0;
  while(x!=y){
    ans+=(x+9)/10;
    x--;
  }  cout << ans << '\n';
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