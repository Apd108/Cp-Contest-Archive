#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;
  vector<vector<char>>v(2,vector<char>(n));
  int f=0;
  for(int i=0;i<2;i++){
    for(int j=0;j<n;j++){
        cin >> v[i][j];
        if(v[i][j]=='f') f++;
    }
  }
  if(f%2==0) cout << 0 << '\n';
  else cout << 1 << '\n';
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