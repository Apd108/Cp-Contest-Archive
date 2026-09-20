#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  string s;
  cin >> s;
  string ans="";
  for(int i=0;i<s.size();i++){
    if(s[i]!='A') ans=ans+'.';
    else ans=ans+'A';
  }  
  cout << ans;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    {
        solve();
    }
    return 0;
}