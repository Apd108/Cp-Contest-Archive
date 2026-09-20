#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;
  char a[n];
  int b[n];
  for(int i=0;i<n;i++) cin >> a[i];
  iota(b,b+n,1);
  for(int i=0;i<n;i++){
    if(a[i]=='x') continue;
    else reverse(b,b+i+1);
  }
  for(int i=0;i<n;i++){
    cout << b[i] << " ";
  }
} //queue deque question 

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    {
        solve();
    }
    return 0;
}