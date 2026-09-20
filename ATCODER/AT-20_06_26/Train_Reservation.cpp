#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n; cin >> n;
    char c; cin >> c;
    char a[n][5];
    // cout << (int)'A';
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<5;j++){
            cin >> a[i][j];
            if(j==c-65 && a[i][j]=='o') cnt++;
        }
    } 
    if(cnt>0) cout << "Yes";
    else cout << "No";
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    {
        solve();
    }
    return 0;
}