#include<bits/stdc++.h>
using namespace std;
#define int __int128

void solve(){
  long long px,py,qx,qy,rx,ry,sx,sy;
  cin >> px >> py >> qx >> qy >> rx >> ry >> sx >> sy;
  int a1=2*(qx-px);
  int b1=2*(qy-py);
  int c1=((int)qx*qx+qy*qy)-((int)px*px+py*py);
  int a2=2*(sx-rx);
  int b2=2*(sy-ry);
  int c2=((int)sx*sx+sy*sy)-((int)rx*rx+ry*ry);
  int d=a1*b2-a2*b1;
  int dx=c1*b2-c2*b1;
  int dy=a1*c2-a2*c1;
  if(d==0){
    if(dx==0 && dy==0) cout << "Yes" << '\n';
    else cout << "No" << '\n';
  } else cout << "Yes" << '\n';
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t=1;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}