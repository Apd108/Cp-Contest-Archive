#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n,m;
  cin >> n >> m;
  vector<int>bea(n);
  vector<int>ver(m);
  for(int i=0;i<n;i++) cin >> bea[i];
  for(int i=0;i<m;i++) cin >> ver[i];
  int bea1=bea[0]+n-1;
  int ver1=ver[0]+m-1;
  if(ver1>bea1) cout << 2 << '\n';
  else cout << 1 <<'\n';
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