#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;
  vector<int>v(n);
  for(auto &x:v) cin >> x;
  for(int i=0;i<n;i+=10){
    bool temp=true;
    for(int j=i;j<min(n,i+10);j++){
        if(v[j]>i+10 || v[j]<=i){
            temp=0;
            break;
      } 
    } if(!temp){
        cout << "No";
        return;
    }
  }  cout << "Yes";
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    {
        solve();
    }
    return 0;
}