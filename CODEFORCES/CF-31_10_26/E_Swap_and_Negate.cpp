#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;
  vector<int>v(n);
  int sum=0;int neg=0;int zero=0;int mn=INT_MAX;
  for(auto &x:v){
    cin >> x;
    sum+=abs(x);
    if(x<0){
        neg++;
        mn=min(mn,abs(x));
    }
    if(x==0) zero++;
  }
  if(neg%2==0 || zero>=1) cout << sum << '\n';
  else cout << sum-2*mn << '\n';
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