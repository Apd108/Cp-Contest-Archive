#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n,s,l;
  cin >> n >> s >> l;
  vector<int>v(n);
  for(int i=1;i<n;i++) cin >> v[i];
  vector<int>left(8001);  
  vector<int>right(8001);  
  left[s]=0;
  for(int i=s-1;i>=1;i--){
    left[i]=left[i+1]+v[i];
  }
  right[s]=0;
  for(int i=s+1;i<=n;i++){
    right[i]=right[i-1]+v[i-1];
  }
  int ans=1;
  for(int i=1;i<=s;i++){
    for(int j=s;j<=n;j++){
        int cost=left[i]+right[j]+min(left[i],right[j]);
        if(cost<=l) ans=max(ans,j-i+1);
    }
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