#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,k;
    cin >> n >> k;
    string s; cin >> s;
    if(n==k){
      for(int i=0;i<n;i++){
      if(s[i]=='1'){
        cout << "NO" << '\n';
        return;
      } 
      } cout << "YES" << '\n';
      return;
    }
    for(int i=0;i<n-k;i++){
      if(s[i]=='0') continue;
      else{
        s[i]='0'; s[i+k]^=1;
      }
    }
    for(int i=0;i<n;i++){
      if(s[i]=='1'){
        cout << "NO" << '\n';
        return;
      }
    }
    cout << "YES" << '\n';
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