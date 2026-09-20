#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;
  vector<int>v(n);
  vector<int>temp(3);
  for(auto &x:v){
    cin >> x;
  }
  for(int i=0;i<n;i++){
    int x=((v[i]+999)/1000)*1000-v[i];
    temp[2]+=x/100;
    temp[1]+=(x/10)%10;
    temp[0]+=x%10;
  }
  for(auto x:temp) cout << x << " ";
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    {
        solve();
    }
    return 0;
}