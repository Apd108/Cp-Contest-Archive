#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;
  int sum=0;
  int x=1;int temp=1;
  int cnt=0;
  while(sum<=n){
    sum+=x;
    x+=temp;
    temp++;
    cnt++;
  }  
  cout << cnt-1 << '\n';
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