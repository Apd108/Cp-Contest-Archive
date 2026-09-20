#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;
  int a[n];
  int odd=0;int even=0;
  for(int i=0;i<n;i++){
    cin >> a[i];
    if(a[i]%2==0) even++;
    else odd++;
  }  
  if(odd%2==0 && even==0){
    cout << "No" << '\n';
  } else cout << " Yes" << '\n';
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