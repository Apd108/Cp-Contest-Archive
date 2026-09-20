#include<bits/stdc++.h>
using namespace std;
#define int long long

bool avl(char c,vector<char>poss){
    char c1=c+32;
    for(char p:poss){
        if(p==c1) return true;
    }
    return false;
  }
void solve(){
  int n,m;
  cin >> n >> m;
  vector<string>v(n);
  vector<string>abv(m);
  for(auto &it:v) cin >> it;
  for(auto &it:abv) cin >> it;
  vector<char>poss;
  for(int i=0;i<n;i++){
    poss.push_back(v[i][0]);
  }
  for(int i=0;i<m;i++){
    int j=abv[i].size()-1;
    while(j>=0){
       if(avl(abv[i][j],poss)){
        j--;
       } 
       else {
        cout << "NO" << '\n';
        return;
       }
    }
  }
  cout << "YES" << '\n';
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