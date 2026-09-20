#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n,k;
  cin >> n >> k;
  int a[n];
  int tsum=0;
  for(int i=0;i<n;i++){
    cin >> a[i];
    tsum+=a[i];
  }  
  sort(a,a+n,greater<int>());
  int cnt=0;
  for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if((tsum+a[i]+a[j])/2 > k) cnt++;
    }
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