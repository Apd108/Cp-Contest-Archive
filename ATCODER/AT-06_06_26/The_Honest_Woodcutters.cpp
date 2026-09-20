#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;
  int a[n],b[n];
  for(int i=0; i<n; i++){
    cin >> a[i];
  } 
  for(int i=0; i<n; i++){
    cin >> b[i];
  }   
  bool angel=true;
  for(int i=0; i<n; i++){
   if((b[a[i]-1])!=i+1){
    angel=false;
    break;
   } 
  }  
  if(angel==true) cout << "Yes";
  else cout << "No";
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    {
        solve();
    }
    return 0;
}