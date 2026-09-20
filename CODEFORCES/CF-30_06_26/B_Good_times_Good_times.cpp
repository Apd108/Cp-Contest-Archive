#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  string n;
  cin >> n;
  int temp=n.size();
  int ans=1;
  for(int i=0;i<temp;i++){
    ans*=10;
  }
  cout << ans+1 << '\n';
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