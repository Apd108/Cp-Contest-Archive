#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,m;
    cin >> n >> m;
    int a[n],d[n],b[n];
    for(int i=0;i<n;i++){
        cin >> a[i] >> d[i] >> b[i];
    }
    vector<int>ans;
    for(int k=1;k<=m;k++){
        for(int i=0;i<n;i++){
            if(d[i]>k) ans.push_back(a[i]);
            else ans.push_back(b[i]);
        }
    }
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   {
        solve();
    }
    return 0;
}