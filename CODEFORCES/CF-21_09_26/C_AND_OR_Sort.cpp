#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    if(s[0]=='1'){
     int ans=0;
    for (char c:s){
        if(c=='0')
           ans++;
        }
        cout << ans << '\n';
        return;
    }
    int zeros=0;
    for(char c:s){
        if(c=='0') zeros++;
    }
    int ones=0,ans=n;
    for(int i=0;i<n;i++){
        if(s[i]=='0') zeros--;
        else ones++;
        ans=min(ans,ones+zeros);
    }
    cout << ans << '\n';

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