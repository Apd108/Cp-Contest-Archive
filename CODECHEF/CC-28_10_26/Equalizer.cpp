#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;
  vector<int>v(n);
  vector<int>bin(n-1);
  int zero=0;
  for(auto &x:v) cin >> x;
  for(int i=0;i<n-1;i++){
    bin[i]=v[i+1]-v[i];
    if(bin[i]==0) zero++;
  }  
  int ans=0;int temp=0;
  for(int i=0;i<n-1;i++){
    if(bin[i]==-1){
        temp=1;
        ans=max(ans,1LL);
    }
    else if(bin[i]==1){
        if(temp) ans=2;
        else if(ans==0) ans=1;
    }
  }
  cout << ans+zero << '\n';
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