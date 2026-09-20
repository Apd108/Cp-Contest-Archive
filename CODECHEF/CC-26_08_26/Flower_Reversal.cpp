#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;
  string s;
  cin >> s;
  int inv=0;
  for(int i=0;i<n-1;i++){
    if(s[i]!=s[i+1]) inv++;
  }  
  if(inv==0) cout << n-1 << '\n';
  else if(inv<=2) cout << n-2 << '\n';
  else cout << n-1-(inv-2) << '\n';
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