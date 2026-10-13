#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;
  int cnt=0;
  vector<pair<int,int>>v(n);
  for(auto &x:v) cin >> x.first >> x.second;
  for(int i=0;i<n;i++){
    if((v[i].second-v[i].first)>=2) cnt++;
  }  
  cout << cnt;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    {
        solve();
    }
    return 0;
}