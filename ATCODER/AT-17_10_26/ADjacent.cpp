#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  char a[2][2];
  int ai=0,aj=0,di=0,dj=0;
  for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        cin >> a[i][j];
    }
  } 
  for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        if(a[i][j]=='A'){
            ai=i;aj=j;
        }
        else if(a[i][j]=='D'){
            di=i;dj=j;
        }
    }
  }  
  if(abs(ai-di)+abs(aj-dj)==2) cout << "No";
  else cout << "Yes";
  
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    {
        solve();
    }
    return 0;
}