#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;
  int one=0;
  int s_one=0;
  int s_wone=0;
  vector<int>v(n);
  for(int i=0;i<n;i++){
    cin >> v[i];
    s_one+=v[i];
    if(v[i]==1) one++;
    else s_wone+=v[i];
  }  
  if(one==n){
    cout << -1 << '\n';
    return;
  }
  if(one==n-1){
    if(v[0]!=1 || v[n-1]!=1){
        cout << s_wone << '\n';
    }
    else cout << s_one-1 << '\n';
  }
  else if(one==n-2){
    if(v[0]!=1 && v[n-1]!=1){
        cout << s_wone-1 << '\n';
    }
    else cout << s_one-1 << '\n';
  }
  else cout << s_one-1 << '\n';
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