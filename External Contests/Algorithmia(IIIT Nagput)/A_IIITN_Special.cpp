#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;
  vector<int>v(n);
  for(auto &x:v) cin >> x;
  vector<int>b(n);
  b[0]=v[0];
  for(int i=1;i<n;i++){
    b[i]=b[i-1]^v[i];
  }  
  for(auto x:b) cout << x << " ";
}


int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    {
        solve();
    }
    return 0;
}