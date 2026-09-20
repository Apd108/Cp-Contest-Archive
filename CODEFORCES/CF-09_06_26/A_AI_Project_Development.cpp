#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n,x,y,z;
  cin >> n >> x >> y >> z;
  if(n<=(x+y)*z){
    cout << ceil(1.0*n/(x+y)) << '\n';
  } else { 
    cout <<  min(ceil(1.0*(n-x*z)/(10*y+x))+z,ceil(1.0*n/(x+y)))<< '\n';
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