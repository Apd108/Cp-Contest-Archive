#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;
  int ans=0;
  vector<int>v(n);
  for(auto &it:v){
    cin >> it;
    ans=max(ans,it);
  }
  for(int i=0;i<n;i++){
    int temp=v[i];
    int big=-1;
    for(int j=i+1;j<n;j++){
        big=max(big,v[j]);
    }
    if(big>=temp) ans=max(ans,temp+big);
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