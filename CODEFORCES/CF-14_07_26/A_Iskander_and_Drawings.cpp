#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  string s;int n;
  cin >> n >> s;
  int len=0; int ans=0;
  for(int i=0;i<n;i++){
    if(s[i]=='#'){
        len++;
        ans=max(ans,len);
    } else len=0;
  }  if(ans==0) cout << 0 << '\n';
  else cout << ceil((ans+1)/2) << '\n';
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