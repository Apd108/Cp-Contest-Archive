#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n,k;
  cin >> n >> k;
  if(n>k || k>=2*n){
    cout << -1 << '\n';
    return;
  }  
  vector<vector<int>>ans(n,vector<int>(n));
  int req=k-n;
  int x=1;
  for(int i=0;i<req;i++){
    ans[i][i]=x; x++;
    ans[i][i+1]=x; x++;
  }
  for(int i=req;i<n;i++){
    ans[i][i]=x; x++;
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(ans[i][j]==0){
            ans[i][j]=x++;
      }
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout << ans[i][j] << " ";
    }
    cout << '\n';
  }
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