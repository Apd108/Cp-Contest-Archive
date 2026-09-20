#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<int>v(n);
    for(auto &x:v) cin >> x;
    int z=0;int o=0;
    if(v[0]==v[n-1] && v[0]==0){
        cout << 0 << '\n';
        return;
    }
    else{
        for(int i=1;i<n-1;i++){
        z+=v[i]==0;
        o+=v[i]==1;
      }
    }
    if(v[0]==0 || v[n-1]==0){
        if(z>=1) cout << 1 << '\n';
        else cout << -1 << '\n';
        return;
    }
    if(v[0]==1 && v[n-1]==1){
        if(z>=2) cout << 2 << '\n';
        else cout << -1 << '\n';
        return;
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