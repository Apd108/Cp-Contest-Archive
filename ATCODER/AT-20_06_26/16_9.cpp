#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int x,y;
  cin >> x >> y;
  int g=gcd(x,y);
  if(x/g==16 && y/g==9) cout << "Yes";
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