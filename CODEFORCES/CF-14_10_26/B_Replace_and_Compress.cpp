#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  string s;
  cin >> s;
  int ans=1;
  bool temp1=0,temp2=0;
  for(int i=0;i<s.size()-2;i++){
    if(s[i]==s[i+1] && s[i]==s[i+2]) temp1=1;
    if(s[i]==s[i+2] && s[i+1]!=s[i+2]) temp2=1;
  }
  cout << ans+temp1+temp2 << '\n';
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