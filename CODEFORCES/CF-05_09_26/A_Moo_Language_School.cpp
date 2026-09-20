#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n,k;
  cin >> n >> k;
  string s;
  cin >> s;
  int cnt=0;
  for(int i=0;i<n;i+=k){
    int x=count(s.begin()+i,s.begin()+i+k,'0');
    if(x==0) cnt++;
  }  
  cout << cnt << '\n';
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