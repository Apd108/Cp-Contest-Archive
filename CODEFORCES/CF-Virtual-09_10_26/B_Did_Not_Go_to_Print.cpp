#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n;
  string s;
  cin >> n >> s;
  vector<int>memory(0);
  vector<int>avl(n+1,0);
  for(int i=0;i<n;i++){
    if(s[i]=='1'){
        memory.push_back(i+1);
    }
    else if(s[i]=='2'){
        if(memory.size()){
            avl[memory.back()]++;
            memory.pop_back();
        }
        else{
            avl[i+1]++;
        }
    }
    else{
        avl[i+1]++;
    }
  }
  int cnt=0;
  for(int i=1;i<=n;i++){
    if(avl[i]==0) cnt++;
}
cout << cnt << '\n';
  for(int i=1;i<=n;i++){
    if(avl[i]==0) cout << i << " " ;
}
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