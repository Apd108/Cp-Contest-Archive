#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int h,w;
    cin >> h >> w;
    char a[h][w];
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin >> a[i][j];
        }
    } 
    int min_r = h, max_r = -1;
    int min_c = w, max_c = -1;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            if(a[i][j]=='#'){
                min_r=min(min_r, i); 
                max_r=max(max_r, i); 
                min_c=min(min_c, j); 
                max_c=max(max_c, j); 
      }
    }
  }
  for(int i=min_r;i<=max_r;i++){
    for(int j=min_c;j<=max_c;j++){
        cout << a[i][j];
    } cout << '\n';
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