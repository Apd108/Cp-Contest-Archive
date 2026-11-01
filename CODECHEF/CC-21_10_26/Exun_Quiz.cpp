#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n,s;
  cin >> n >> s;
  int x=-1;
  if(s%4==0) x=s/4;
  else x=(s+3)/4 + (4-s%4);
  if(x>n) cout << -1 << '\n';
  else cout << x << '\n';
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