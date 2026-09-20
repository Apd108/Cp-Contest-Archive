#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int x,y,z;
  cin >> x >> y >> z;
  cout << min(12*x,12*y+z);  
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    {
        solve();
    }
    return 0;
}