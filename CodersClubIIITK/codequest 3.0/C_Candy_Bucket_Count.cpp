#include<bits/stdc++.h>
using namespace std;
#define int long long
vector<int>t(1e9,0);
void solve(){
    int n;
    cin >> n;
    vector<pair<int,int>>v(n);
    for(auto &x:v) cin >> x.first >> x.second;
    int k=1;
    for(int i=0;i<n;i++){
        t[k]+=(v[i].second-v[i].first+1);
        if(v[i+1].first-v[i].first < t[k]){
            k++;
            t[k-1]=v[i+1].first-v[i].first;
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