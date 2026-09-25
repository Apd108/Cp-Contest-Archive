#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n,k;
  cin >> n >> k;
  if(n%k==0){
    cout << 0 << '\n';
    return;
  }
  else cout << k-(n%k) << '\n';
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