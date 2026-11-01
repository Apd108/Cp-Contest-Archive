#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n,m;
  cin >> n >> m;
  vector<int>v(n);
  for(auto &x:v) cin >> x;
  sort(v.begin(),v.end());
  int sum=0;int cnt=0;
  for(int i=0;i<n;i++){
    sum+=v[i];
    if((sum*(sum-1)/2)>m) break;
    else cnt++;
  }
  cout << cnt << '\n';
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