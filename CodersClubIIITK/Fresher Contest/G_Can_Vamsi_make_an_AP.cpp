#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int a,b,c;
  cin >> a >> b >> c;
  if(a-b == b-c){
    cout << "YES" << '\n';
    return;
  }
  int d=b-a;
  if((b+d)%c==0 && b+d>0){
    cout << "YES" << '\n';
    return;
  }
  int e=c-b;
  if((b-e)%a==0 && b-e>0){
    cout << "YES" << '\n';
    return;
  }
  int f=(c-a);
  if(f%2==0 && (a+f/2)%b==0 && a+f/2>0){
    cout << "YES" << '\n';
    return;
  }
  cout << "NO" << '\n';
    
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