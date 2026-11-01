#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;
  string s;
  cin >> s;
  int same=1;
  int cnt=0;
  for(int i=0;i<n-2;i++){
    if(s[i]==s[i+1] && s[i+1]==s[i+2]){
        cnt++;
        i+=2;
    }
  }  
  cout << cnt << '\n';
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