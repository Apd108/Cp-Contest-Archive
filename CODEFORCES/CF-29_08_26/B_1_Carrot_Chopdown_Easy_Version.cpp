#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n,m;
  cin >> n >> m;
  vector<int>v(n);
  vector<int>freq(2*m+1,0);
  for(auto &x:v){
    cin >> x;
    freq[x]++;
  }
  int odd=0;int even=0;
  for(int i=0;i<n;i++){
    if(v[i]%2==1) odd++;
    else even ++;
  }  
  int ans=0;
  if(even==0) cout << n << '\n';
  else {
    for(int i=1;i<=m;i++){
        ans=max(ans,n+freq[2*i]);
        n-=freq[i];
    }
    cout << ans << '\n';
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