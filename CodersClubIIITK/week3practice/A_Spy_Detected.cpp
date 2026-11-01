#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n; cin >> n;
  vector<int>v(n);  
  for(auto &x:v) cin >> x;
  for(int i=0;i<n-2;i++){
    if(v[i]==v[i+1] && v[i+1]!=v[i+2]){
        cout << i+3 << '\n';
        return;
    }
    else if(v[i]!=v[i+1] && v[i+1]==v[i+2]){
        cout << i+1 << '\n';
        return;
    }
    else if(v[i]==v[i+2] && v[i]!=v[i+1]){
        cout << i+2 << '\n';
        return;
    }
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