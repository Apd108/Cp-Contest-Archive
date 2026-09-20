#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n,m,k;
  cin >> n >> m >> k;
  int a[n];
  for(int i=0;i<n;i++) cin >> a[i];
  int run_sum=0;
  vector<int>ate(n,0);
  for(int i=0;i<n;i++){
    if(i>=m) run_sum-=ate[i-m];
    if(run_sum+a[i]<=k){
        cout << "Yes" << '\n';
        ate[i]=a[i];
        run_sum+=a[i];
    } else {
        cout << "No" <<'\n';
        ate[i]=0;
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