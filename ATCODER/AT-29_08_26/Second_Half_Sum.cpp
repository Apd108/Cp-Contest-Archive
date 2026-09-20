#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;
  int a[n];
  int sum=0;
  for(int i=0;i<n;i++){
    cin >> a[i];
    if(i>=(n/2)) sum+=a[i];
  }  
  cout << sum;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    {
        solve();
    }
    return 0;
}