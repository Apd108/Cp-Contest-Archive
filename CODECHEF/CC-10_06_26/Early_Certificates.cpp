#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n,m;
  cin >> n >> m;
  string a; cin >> a;
  string b; cin >> b; 
  string ans="";
  for(int i=0;i<min(n,m);i++){
    if(a[i]==b[i]){
        ans=ans+a[i];
    } else break;
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