#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n,k,m;
  cin >> n >> k >> m;
  int a[n];
  if(m<k){
    cout << "NO" << '\n';
    return;
  }
  else {
    a[k-1]=m-k+1;
    for(int i=0;i<n;i++){
        if(i!=k-1) a[i]=1;
    }
  }
  cout << "YES" << '\n';
  for(int i=0;i<n;i++) cout << a[i] << " ";
  cout << '\n';
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