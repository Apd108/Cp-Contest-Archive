#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int a,b;
  cin >> a >> b;
  if(abs(a-b)<=2) cout << "Interesting" ;
  else cout << "Boring";  
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    {
        solve();
    }
    return 0;
}