#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  string s;
  cin >> s;
  int ans=0;
  for(char c:s){
    if(c=='o') ans++;
  }
  if(ans%2==0) cout << "even";
  else cout << "odd";
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    {
        solve();
    }
    return 0;
}