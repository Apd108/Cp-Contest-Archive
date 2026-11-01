#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int q;
    cin >> q;
    map<string,int>m;
    int cnt=1;
    while(q--){
        string s;
        cin >> s;
        if(m.find(s)==m.end()){
            m[s]=cnt++;
        }
        cout << m[s] << '\n';
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