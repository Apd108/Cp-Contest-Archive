#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n,k;
  cin >> n >> k;
  int ans=0;
  for(int i=1;i<=k;i+=2*n){
    ans=ans+(k-i+1);
  }
  for(int i=2*n;i<=k;i+=2*n){
    ans=ans+(k-i+1);
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