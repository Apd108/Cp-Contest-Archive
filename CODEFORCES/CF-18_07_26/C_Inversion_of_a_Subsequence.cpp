#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;
  int a[n],b[n];
  for(int i=0;i<n;i++) cin >> a[i];
  for(int i=0;i<n;i++) cin >> b[i];
  int temp=0;
  for(int i=0;i<n;i++){
    if(a[i]==b[i]) temp++;
  }
  if(temp==n){
    cout << 0 << '\n';
    return;
  }
  int oz=0,oo=0,zz=0;
  for(int i=0;i<n;i++){
    if(a[i]==1 && b[i]==0) oz++;
    else if(a[i]==0 && b[i]==0) zz++;
    else if(a[i]==1 && b[i]==1) oo++;
  }
  if(oz%2==1) cout << 1 << '\n';
  else {
    if(oz>0) cout << 2 << '\n';
    else{
        if(oo>0 && zz>0) cout << 2 << '\n';
        else cout << -1 << '\n';
    }
  }
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