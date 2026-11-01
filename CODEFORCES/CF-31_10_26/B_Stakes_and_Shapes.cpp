#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int x,y,z;
  cin >> x >> y >> z;
  string ans="";
  if(y>=z){
    for(int i=0;i<x+y+z;i++){
    ans+='R';
  }
}
  else if(z>=x){
    for(int i=0;i<x+y+z;i++){
    ans+='S';
  }
}
  else{
    for(int i=0;i<x+y+z;i++){
    ans+='P';
  }
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