#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int x1,y1,r1,x2,y2,r2;
  cin >> x1 >> y1>> r1 >> x2 >> y2 >> r2 ;
  int x=abs(x1-x2)*abs(x1-x2);
  int y=abs(y1-y2)*abs(y1-y2);
  int d=x+y;
  int high=(r1+r2)*(r1+r2);
  int low =abs(r1-r2)*abs(r1-r2);
  if(d<=high && d>=low){
    cout << "Yes" << '\n';
  } else cout << "No" << '\n';
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