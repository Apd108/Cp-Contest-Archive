#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;
  int a[n];
  for(int i=0;i<n;i++) cin >> a[i];
  for(int i=0;i<n-1;i++){
    if(a[i]>i+1){
        a[i+1]+=a[i]-(i+1);
        a[i]=i+1;
    }
    else if(a[i]<i+1){
        cout << "NO" << '\n';
        return;
    } else continue;
  }
  for(int i=0;i<n-1;i++){
    if(a[i]>=a[i+1]){
        cout << "NO" << '\n';
        return;
    } 
  } cout << "YES" << '\n';
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