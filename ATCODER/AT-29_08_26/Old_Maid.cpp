#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;
  vector<int>v(n);
  vector<int>freq(101,0);
  for(auto &x:v) cin >> x;
  for(int i=0;i<n;i++){
    freq[v[i]]++;
  }
  int ans=0;
  for(int i=1;i<=100;i++){
    if(freq[i]%2==1) ans+=i; 
  }
  cout << ans;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    {
        solve();
    }
    return 0;
}