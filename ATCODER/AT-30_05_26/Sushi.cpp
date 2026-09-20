#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n,m;
  cin >> n >> m;
  int a[n],b[m] ;
  for(int i=0; i<n; i++){
    cin >> a[i];
  }
    for(int i=0; i<m; i++){
    cin >> b[i];
  }
  sort(a,a+n);
  sort(b,b+m);
  int cnt=0;
  int j=0;
  for(int i=0; i<n && j<m; i++){
    if(b[j]<=2*a[i]){
        cnt ++;
        j++;
    } else{};
 } cout << cnt;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    {
        solve();
    }
    return 0;
}