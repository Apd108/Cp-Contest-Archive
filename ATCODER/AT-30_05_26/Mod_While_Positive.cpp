#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,m;
    cin >> n >> m;
    int rem=-1;
    int cnt=0;
    while(m>0){
        rem=n%m;
        m=rem;
        cnt++;
    } cout << cnt;

}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  {
        solve();
    }
    return 0;
}