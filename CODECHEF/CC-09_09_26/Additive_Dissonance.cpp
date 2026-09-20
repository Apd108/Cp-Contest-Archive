#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;
  vector<int>v(n);
  for(auto &x:v) cin >> x;
  sort(v.begin(),v.end());
  int count=1;
  int max_freq=0;
  for(int i=1;i<n;i++){
    if(v[i]==v[i-1]){
        count+=1;
    } else{
        max_freq=max(max_freq,count);
        count=1;
    }
  }
  max_freq=max(max_freq,count);
  cout << (max_freq+1)/2 << '\n';
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