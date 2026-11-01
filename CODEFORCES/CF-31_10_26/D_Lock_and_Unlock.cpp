#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;
  vector<int>v(n);
  for(auto &x:v) cin >> x;
  sort(v.begin(),v.end());
  int ans=0;
  for(int i=0;i<n;i++){
    ans+=abs(v[i]-v[n/2]);
  }
  cout << ans << " " << v[n-1]-v[0] << '\n';
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