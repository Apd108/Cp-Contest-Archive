#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int a,b,c;
    cin >> a >> b >> c;
    if(a>=b) cout << a+c-b << '\n';
    else cout << max(b-a,abs(a+c-b)) << '\n';
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