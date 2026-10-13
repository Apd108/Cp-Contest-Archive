#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n,h;
  cin >> n >> h;
  vector<int>v(n);
  for(auto &x:v) cin >> x;
  int ans=0;
  for(int i=0;i<n;i++){
    ans+=v[i]>h;
  }
  cout << ans+n;

}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    {
        solve();
    }
    return 0;
}