#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  vector<string>v(5);
  for(string &s:v) cin >> s;
  int ans=INT_MAX;
  for(int i=0;i<5;i++){
    int cnt=0;
    for(char c:v[i]){
        if(c=='o') cnt++;
    }
    ans=min(ans,5-cnt);
  }  
  for(int i=0;i<5;i++){
    int cnt=0;
    for(int j=0;j<5;j++){
        if(v[j][i]=='o') cnt++;
    }
    ans=min(ans,5-cnt);
  }
  int cnt=0;
  for(int i=0;i<5;i++){
    if(v[i][i]=='o') cnt++;
    ans=min(ans,5-cnt);
  }
  cnt=0;
  for(int i=0;i<5;i++){
    if(v[i][5-i-1]=='o') cnt++;
    ans=min(ans,5-cnt);
  }
  cout << ans;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    {
        solve();
    }
    return 0;
}