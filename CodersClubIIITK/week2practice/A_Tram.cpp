#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;
  vector<pair<int,int>>v(n);
  int k=0;
  int max_ans=-1;
  for(auto &x:v) cin >> x.first >> x.second;
  for(int i=0;i<n;i++){
    k-=v[i].first;
    k+=v[i].second;
    max_ans=max(max_ans,k);
  }
  cout << max_ans;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    {
        solve();
    }
    return 0;
}