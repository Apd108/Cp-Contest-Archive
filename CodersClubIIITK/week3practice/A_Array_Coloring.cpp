#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n; cin >> n;
  vector<int>v(n);
  int cnt=0;
  for(auto &x:v){
    cin >> x;
    if(x%2!=0) cnt++;
  }
  if(cnt%2==0) cout << "YES" << '\n';
  else cout << "NO" << '\n';
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