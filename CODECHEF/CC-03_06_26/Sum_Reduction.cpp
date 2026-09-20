#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;
  int a[n];
  int sum=0; int bit_or=0;
  for(int i=0;i<n; i++){
    cin >> a[i]; 
    sum+=a[i];
    bit_or |= a[i];
  }
  if(sum==bit_or) cout << "Yes" << '\n';
  else cout << "No" << '\n';
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