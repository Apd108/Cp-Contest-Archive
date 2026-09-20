#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,k;
    cin >> n >> k;
    int a[n];
    for(int i=0;i<n;i++){
      cin >> a[i];
    }
    int cnt[n]={0};
    sort(a,a+n);
    for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
        if(a[j]-a[i]>=0 && a[j]-a[i]<=k) cnt[i]++;
      }
    }
    for(int i=0;i<n;i++){
      if(cnt[i]%2==0){
        cout << "YES" << '\n';
        return;
      }
    } cout << "NO" << '\n';

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