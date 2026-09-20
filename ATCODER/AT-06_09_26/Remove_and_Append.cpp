#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n,q;
  cin >> n >> q;
  vector<int>v(n);
  vector<int>que(q);
  for(auto &x:v) cin >> x;
  for(auto &x:que) cin >> x;
  vector<int>pb;
  vector<bool>dn(n+1,false);
  for(int i=q-1;i>=0;i--){
    if(!dn[que[i]]) pb.push_back(que[i]);
    dn[que[i]]=true;
  }
  reverse(pb.begin(),pb.end());
  for(int i=0;i<n;i++){
    if(!dn[v[i]]) cout << v[i] << " ";
  }
  for(auto x:pb){
    cout << x << " ";
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