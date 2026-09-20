#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int x,y,l,r,a,b;
  cin >> x >> y >> l >> r >> a >> b;
  int st=max(l,a);
  int end=min(r,b);
  int size=max(0LL,end-st);
  cout << size*x + (b-a-size)*y;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    {
        solve();
    }
    return 0;
}