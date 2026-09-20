#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  string s;
  cin >> s;
  int e=0,w=0;
  for(int i=0;i<s.size();i++){
    if(s[i]=='E') e++;
    else w++;
  }  
  if(e>w) cout << "East";
  else cout << "West";
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    {
        solve();
    }
    return 0;
}