#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n;
    cin >> n;
    int a[4][201]; 
    for (int i=1;i<=n;i++){
        a[0][i] = i;
        a[1][((i)%n) + 1]=i;
        a[2][((i+2)%n) + 1]=i;
        a[3][((i+4)%n) + 1]=i;
 }
 for (int j=0;j<4;j++){
    for (int i=1;i<=n;i++){
        cout << a[j][i] << " ";
    }
}
 cout << "\n";
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