#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;
  vector<int>v(n);
  for(auto &x:v) cin >> x;
  int f_idx=-1;
  int l_idx=-1;
  for(int i=0;i<n;i++){
    if(v[i]==-1){
        f_idx=i;
        break;
    }
  }
  if(f_idx==-1){
        for(auto &it:v) cout << it << " ";
        cout << '\n';
        return;
  }
  for(int i=n-1;i>=0;i--){
    if(v[i]==-1){
        l_idx=i;
        break;
    } 
  }
   bool before=false;
    for(int i=0;i<f_idx;i++){
        if(v[i]==1){
            before=true;
            break;
        }
    }
    bool after=false;
    for(int i=l_idx+1;i<n;i++){
        if(v[i]==1){
            after=true;
            break;
        }
    }
    for(int i=0;i<n;i++){
        if(i!=f_idx && i!=l_idx){
            if(v[i]==-1) v[i]=0;
        }
    }
    if(l_idx==f_idx){
        if(after==false || before==false) v[l_idx]=1;
        else v[l_idx]=0;
    } 
    else{
        if(before==false) v[f_idx]=1;
        else v[f_idx]=0;
        if (after==false) v[l_idx]=1;
        else v[l_idx]=0;
    }
    for(auto &it:v) cout << it << " ";
    cout << '\n';
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