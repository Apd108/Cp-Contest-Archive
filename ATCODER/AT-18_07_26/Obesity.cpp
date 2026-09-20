#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  double h,w;
  cin >> h >> w;
  if(10000*w>=25*h*h) cout << "Yes";
  else cout << "No";
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    {
        solve();
    }
    return 0;
}