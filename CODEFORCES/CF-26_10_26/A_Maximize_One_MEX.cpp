#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n,k;
  cin >> n >> k;
  vector<int>v(n);
  for(auto &x:v) cin >> x;
  int temp=n-k+1;
  for(int i=0;i<temp;i++){
    auto it=find(v.begin(),v.begin()+temp,i);
    if(it==v.begin()+temp){
        auto it2=find(v.begin(),v.end(),i)-v.begin();
        auto it3=max_element(v.begin(),v.begin()+temp)-v.begin();
        cout << it3+1 << " " << it2+1 << '\n';
        return;
    }
  }  
  cout << -1 << '\n';
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