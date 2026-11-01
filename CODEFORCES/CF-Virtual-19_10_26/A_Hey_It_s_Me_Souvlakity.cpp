#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n; cin >> n;
  string s; cin >> s;
  int cnt=0;
  int big=INT_MIN,small=INT_MAX;
  for(int i=0;i<n;i++){
    if(s[i]=='1'){
        cnt++;
        big=max(big,i+1);
        small=min(small,i+1);
    }
  }
  if(cnt<=2) cout << cnt-1 << '\n';
  else cout << big-small << '\n';
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