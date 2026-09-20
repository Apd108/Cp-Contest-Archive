#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n; string s;
  cin >> n >> s;
  int st=0,fin=n-1;
  for(int i=0;i<n;i++){
    if(s[i]=='1'){
        st=i;
        break;
    }
  } for(int i=n-1;i>=0;i--){
    if(s[i]=='0'){
        fin=i;
        break;
    }
  }
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