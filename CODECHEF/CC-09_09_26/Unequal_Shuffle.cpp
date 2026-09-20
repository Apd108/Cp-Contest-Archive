#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;
  string s1,s2;
  cin >> s1 >> s2;
  int o_a=0,t_b=0;
  for(int i=0;i<n;i++){
    o_a+=s1[i]=='a';
    t_b+=s2[i]=='b';
  }  
  if(o_a==t_b) cout << "YES" << '\n';
  else cout << "NO" << '\n';
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