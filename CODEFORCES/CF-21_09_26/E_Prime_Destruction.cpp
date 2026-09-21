#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    for(auto &x:v) cin >> x;
    int ans=0;
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        ans++;
        if(v[i]!=1){
            for(int j=2;j*j<=v[i];j++){
                if(v[i]%j==0){
                    v[i]/=2;
                    ans+=
                }
            }
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