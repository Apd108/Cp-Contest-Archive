#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n,m;
  cin >> n >> m;
  vector<int>v(n);
  vector<int>freq(2*m+1,0);
  for(auto &x:v){
    cin >> x;
    freq[x]++;
  }  
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