#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int x,y;
  cin >> x >> y;
  int ans=INT_MAX;
  for(int i=1;i<=200;i++){
    int k=0,p=0,days=0,debt=0;
    while(p<=debt){
        days++;
        if(k<i){
            k++;
            debt+=x;
        }
        p+=y*k*k;
    }
    ans=min(ans,days);
  }
  cout << ans << '\n';
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