#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;
  int a[n]; int tsum=0;
  for(int i=0;i<n;i++){
    cin >> a[i];
    tsum+=a[i];
  }  
  int min_diff=INT_MAX;
  int run_sum=0;
  for(int i=0;i<n;i++){
    run_sum+=a[i];
    min_diff=min(min_diff,abs((tsum-run_sum)-run_sum));
  }
  cout << min_diff;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    {
        solve();
    }
    return 0;
}