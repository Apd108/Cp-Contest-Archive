#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n,k;
  cin >> n >> k;
  vector<int>v(n);
  vector<int>freq(k+1,0);
  for(auto &x:v){
    cin >> x;
    freq[x]++;
  }
  int max_freq=0;
  int ans=0; 
  for(int i=1;i<=k;i++){
    max_freq=max(max_freq,freq[i]);
  }
  for(int i=1;i<=k;i++){
    if(freq[i]==max_freq || freq[i]==max_freq-1) ans++;
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