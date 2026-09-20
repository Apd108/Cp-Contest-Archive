#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n,m;
  cin >> n >> m;
  int a[n],b[n-1];
  for(int i=0;i<n;i++) cin >> a[i];
  for(int i=0;i<n-1;i++) cin >> b[i];
  int cnt=0;
  for(int i=0;i<n-1;i++){
    if((a[i]+a[i+1])%2!=b[i]){
        cnt++;
        a[i+1]+=1;
    }
  } cout << min(cnt,n-cnt);
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    {
        solve();
    }
    return 0;
}