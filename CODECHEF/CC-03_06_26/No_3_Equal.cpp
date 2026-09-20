#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;
  string s;
  cin >> s;
  if(n<3) cout << 0 <<'\n';
  int i=0; int cnt=0;
  while(i<n-2){
    if(s[i]==s[i+1] && s[i+1]==s[i+2]){
        cnt++;
        i+=3;
    } else i++;
    }
    if(n>=3){
        cout << cnt << '\n';
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