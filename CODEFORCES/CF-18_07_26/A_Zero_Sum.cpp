#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;
  int a[n];
  for(int i=0;i<n;i++) cin >> a[i];
  int pos=0,neg=0;
  for(int i=0;i<n;i++){
    if(a[i]>0) pos++;
    else neg++;
  }
  if((pos-neg)%4==0) cout << "YES" << '\n';
  else cout << "NO" << '\n';
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