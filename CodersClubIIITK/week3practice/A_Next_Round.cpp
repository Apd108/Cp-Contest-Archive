#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n,k;
  cin >> n >> k;
  vector<int>v(n);
  for(auto &x:v) cin >> x;
  if(v[k-1]==0){
    cout << 0;
    return;
  }
  int ans=0;
  for(int i=0;i<n;i++){
    if(v[i]>=v[k-1]) ans++;
  }  
  cout << ans;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    {
        solve();
    }
    return 0;
}