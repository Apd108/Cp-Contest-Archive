#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;
  int a[n];
  for(int i=0;i<n;i++){
    cin >> a[i];
  }  
  int big=a[0];
  for(int i=0;i<n-1;i++){
    if(a[i]>a[i+1]){
        a[i+1]+=a[i];
    } big=max(big,a[i+1]);
  } cout << big << '\n';

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