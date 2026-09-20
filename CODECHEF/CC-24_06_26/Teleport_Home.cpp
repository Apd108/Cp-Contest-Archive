#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int d,t;
  cin >> d >> t;
  if(d-t<=0) cout << 0;
  else cout << d-t;  
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   {
        solve();
    }
    return 0;
}