#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int a,b,c;
  cin >> a >> b >> c;
  int ans=0;
  int temp=c;
  if(a==b){
    cout << 0 << '\n';
    return;
}
  while(a!=b){
    if(gcd(a,c)==gcd(b,c)){
        ans++;
        break;
    } else {
        c++; ans++;
    }
}
  c=temp;
  int ans1=0;
  while(a!=b){
    a=gcd(a,c);
    b=gcd(b,c);
    ans1++;
    if(a==b) break;
    c++; ans1++;
  } cout << min(ans,ans1) << '\n';
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