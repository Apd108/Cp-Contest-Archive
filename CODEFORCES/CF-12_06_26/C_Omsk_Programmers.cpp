#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int a,b,x;
  cin >> a >> b >> x;
  if(a==b){
    cout << 0 << '\n';
    return;
  }
  int res=abs(a-b);
  int cnt=0; int temp=0;
  while(a!=b){
    if(a>b) a/=x;
    else b/=x;
    cnt++;
    res=min(res,cnt+abs(a-b));    
  }
  cout << res << '\n';
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