#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n,k;
  cin >> n >> k;
  vector<int>v(n);
  for(auto &it:v) cin >> it;
  int ans=INT_MIN;
  for(int i=0;i<=k;i++){
    int st=i;
    int end=n-(k-i)-1;
    int run_sum=0;
    for(int j=st;j<=end;j++) run_sum+=v[j];
    ans=max(ans,run_sum);
  }
  cout << ans << '\n';
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