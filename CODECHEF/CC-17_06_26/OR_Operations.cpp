#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;
  int a[n];
  for(int i=0;i<n;i++) cin >> a[i];
  int total=0;
  for(int i=0;i<n;i++) total|=a[i];
  int merge=0; int req=0;
  for(int i=0;i<n;i++){
    req|=a[i];
    if(req==total){
        merge++;
        req=0;
  }
}
cout << n-merge << '\n';
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