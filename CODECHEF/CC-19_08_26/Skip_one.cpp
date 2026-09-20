#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n,k;
  cin >> n >> k;
  vector<int>v(n);
  for(auto &it:v) cin >> it;
  int ans=0;
  int temp=0;
  int sum=0;
  for(int i=0;i<n;i++){
    sum+=v[i];
    temp=max(temp,v[i]);
    if(sum-temp<=k){
        ans=i+1;
    } else break;
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