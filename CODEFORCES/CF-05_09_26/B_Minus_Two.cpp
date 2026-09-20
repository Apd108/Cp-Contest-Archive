#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;
  vector<int>v(n);
  for(auto &x:v) cin >> x;
  int odd=0; int k0=0;int k2=0;
  for(int i=0;i<n;i++){
    if(v[i]%2==1) odd++;
    else if(v[i]%4==0) k0++;
    else k2++;
  }  
  cout << max({odd,k0,k2}) << '\n';
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