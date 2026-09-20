#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;
  int x=2*n;
  int a[x];
  int ans=0;
  for(int i=0;i<x;i++) cin >> a[i];
  for(int i=0;i<n;i++){
    if(a[i]<a[x-i-1]) a[i]=a[x-i-1];
    ans+=a[i];
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