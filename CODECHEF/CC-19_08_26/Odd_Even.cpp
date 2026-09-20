#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;
  vector<int>v(n);
  for(auto &it:v) cin >> it;  
  int even=0;int odd=0;
  for(int i=0;i<n;i++){
    if(v[i]%2==0) even++;
    else odd++;
  }
  if(odd==even || abs(odd-even)==1) cout << n << '\n';
  else if(odd-even>1) cout << 2*even+1 << '\n';
  else cout << 2*odd+1 << '\n';
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