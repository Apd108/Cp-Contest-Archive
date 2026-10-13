#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int a,b,n;
  cin >> a >> b >> n;
  int cnt=0;
  while(a<=n && b<=n){
    if(a>b){
        b+=a;
        cnt++;
    }
    else{
        a+=b;
        cnt++;
    }
  }
  cout << cnt << '\n';
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