#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n,l,r;
  cin >> n >> l >> r;
  int a[n];
  for(int i=0;i<n;i++) cin >> a[i];
  int sum1=0,sum2=0;
  for(int i=0;i<l-1;i++) sum1+=a[i];
  for(int i=r;i<n;i++) sum2+=a[i];
  cout << max(sum1,sum2) << '\n';
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