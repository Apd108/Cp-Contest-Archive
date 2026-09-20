#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n; cin >> n;
  int a[n][2];
  for(int i=0;i<n;i++){
    for(int j=0;j<2;j++){
        cin >> a[i][j];
    }
  }  
  int q; cin >> q;
  int b[q];
  int res[n+1];res[n]=0;
  for(int i=n-1;i>=0;i--){
    res[i]=max(a[i][0],res[i+1]);
  }
  for(int i=0;i<q;i++){
    cin >> b[i];
    int l=0;
    int h=n-1;
    int t=0;
    while(l<=h){
    int mid=l+(h-l)/2;
    if(a[mid][1]>b[i]){
        t=mid;
        h=mid-1;
    } else l=mid+1;
  } cout << res[t] << '\n';
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