#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int k,r;
  cin >> k >> r;
  int ans=0;
  int temp=k;
  while(1){
    if(k%10==0 || k%10==r){
        cout << ans+1;
        return;
    }
    else{
        k+=temp;
        ans++;
    }
  }  
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    {
        solve();
    }
    return 0;
}