#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;
  vector<int>v(n);
  for(auto &x:v) cin >> x;
  
  for(int i=0;i<n;i++){
    if(i==0 || i==n-1) cout << (v[n-1]-v[0])/2 << '\n';
    else{
        int x=max(v[i]-v[0],v[n-1]-v[i-1]);
        int y=max(v[i+1]-v[0],v[n-1]-v[i]);
        cout << (min(x,y))/2 << '\n';
    }
  }  
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    {
        solve();
    }
    return 0;
}