#include<bits/stdc++.h>
using namespace std;
#define int long long
 
void solve(){
  string s;
  cin >> s;
  if(s.size()>10){
    cout << s[0] << s.size()-2 << s[s.size()-1] << '\n';
  } 
  else cout << s << '\n';
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