#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n; cin >> n;
  int a[n],b[n];
  string s[n];
  for(int i=0;i<n;i++){
    cin >> a[i] >> b[i] >> s[i];
  }
  int res=0;
  for(int i=0;i<n;i++){
    if(s[i]=="keep"){
        res+=b[i]-a[i];
    }
  } cout << res;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    {
        solve();
    }
    return 0;
}