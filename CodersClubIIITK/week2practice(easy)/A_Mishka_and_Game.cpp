#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    vector<pair<int,int>>v(n);
    int m=0,c=0;
    for(auto &x:v) cin >> x.first >> x.second;
    for(int i=0;i<n;i++){
        if(v[i].first>v[i].second) m++;
        else if(v[i].first<v[i].second) c++;
    }
    if(m>c) cout << "Mishka";
    else if(c>m) cout << "Chris";
    else cout << "Friendship is magic!^^";
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    {
        solve();
    }
    return 0;
}