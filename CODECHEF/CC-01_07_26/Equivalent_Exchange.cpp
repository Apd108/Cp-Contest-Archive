#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n,k;
  cin >> n >> k;
  int a[n];
  for(int i=0;i<n;i++){
    cin >> a[i];
  }  
  int net=0,min_red=0,max_red=k;
  for(int i=0;i<n;i++){
    net+=a[i];
    min_red=max(min_red,-net);
    max_red=min(max_red,k-net);
  }
  if(min_red<=max_red) cout << "Yes" << '\n';
  else cout << "No" << '\n';
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