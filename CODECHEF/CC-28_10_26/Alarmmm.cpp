#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n,k;
  cin >> n >> k;
  string s;
  cin >> s;
  int pos=-1;
  int cnt=0;
  for(int i=0;i<n;i++){
    if(pos==-1 && s[i]=='1'){
        cnt++;
        pos=i;
    }
    else if(s[i]=='1'){
        if(i-pos>k){
            pos=i;
            cnt++;
        }
    }
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