#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int x,y;
  cin >> x >> y;
  cout << max(abs(x-y)-1,0LL);  
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    {
        solve();
    }
    return 0;
}