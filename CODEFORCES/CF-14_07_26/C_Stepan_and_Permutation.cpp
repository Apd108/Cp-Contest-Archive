#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n,x,y;
  cin >> n >> x >> y;
  int a[n];
  for(int i=0;i<n;i++) cin >> a[i];  
  int pos=gcd(x,y);
  for(int i=0;i<n;i++){
    if((i+1)%pos!=a[i]%pos){
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