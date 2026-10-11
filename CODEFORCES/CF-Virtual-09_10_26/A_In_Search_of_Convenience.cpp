#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int x1,y1,r;
  cin >> x1  >> y1 >> r;
  for(int i=(-100);i<=100;i++){
    for(int j=(-100);j<=100;j++){
        if((x1-i)*(x1-i)+(y1-j)*(y1-j) == r*r){
            cout << i << " " << j << '\n';
            return;
        }
    }
  }
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