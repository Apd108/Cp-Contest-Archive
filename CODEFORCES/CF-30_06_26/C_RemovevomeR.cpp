#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n ; string s;
  cin >> n >> s;
  int gaps=0;
  for(int i=0;i<n-1;i++){
    if(s[i]!=s[i+1]) gaps++;
  }  
  if(gaps==1) cout << 2 << '\n';
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