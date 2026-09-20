#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;
  int a[n],b[n];
  for(int i=0;i<n;i++) cin >> a[i];  
  for(int i=0;i<n;i++) cin >> b[i];
  for(int i=0;i<n-1;i++){
    if(a[i]==b[i]) continue; 
    else if(a[i]<b[i]){
        a[i+1]-=b[i]-a[i];
        a[i]=b[i];
    }
    else {
        cout << "NO" << '\n';
        return;
    }
  } bool ans=true;
  if(a[n-1]<=b[n-1]){
    a[n-1]=b[n-1];
  }
  for(int i=0;i<n;i++){
    if(a[i]!=b[i]){
        ans=false;
        break;
    }
  }
  if(ans) cout << "YES" << '\n';
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