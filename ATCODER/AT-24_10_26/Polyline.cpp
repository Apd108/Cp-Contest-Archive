#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n,k;
  cin >> n >> k;
  vector<int>v(n);
  for(auto &x:v) cin >> x;
  int ans=0;
  for(int i=0;i<n;i++){
        if(v[i]==k){
            ans++;
        }
    }
    for(int i=0;i<n-1;i++) {
        if(min(v[i],v[i+1])<k && k<max(v[i],v[i+1])){
            ans++;
        }
    }
    cout << ans << '\n';
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    {
        solve();
    }
    return 0;
}