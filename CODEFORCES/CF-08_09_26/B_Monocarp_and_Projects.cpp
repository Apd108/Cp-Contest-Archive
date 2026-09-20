#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int x,y,k;
  cin >> x >> y >> k;
  int z=y-x; int l=x+k-1;
  if(z==0){
    cout << 0 << '\n';
    return;
  }  
  int ans=0;
  while(x<=min(l,z)){
    ans+=z%x;
    x++;
  }
  if(x>z){
    ans+=(l-x+1)*z;
  }
  cout << ans << '\n';

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