#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int a,b,p,q,r;
  cin >> a >> b >> p >> q >> r;
  int ans=p*((a+1)/2)+q*((b+1)/2);
  for(int i=0;i<=min(a,b);i++){
    int a1=a-i;
    int b1=b-i;
    int cost=i*r+p*((a1+1)/2)+q*((b1+1)/2);
    ans=min(ans,cost);
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