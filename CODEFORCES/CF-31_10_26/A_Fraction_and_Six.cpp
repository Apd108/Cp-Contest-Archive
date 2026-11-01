#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n,m;
  cin >> n >> m;
  vector<int>freq(26,0);
  string num;cin >> num;
  string den;cin >> den;
  for(char c:num) freq[c-'a']++;
  for(char c:den) freq[c-'a']--;
  for(int temp=0;temp<26;temp++){
    if(temp=='s'-'a' || temp=='x'-'a' || temp=='i'-'a'){
        if(freq[temp]!=1){
            cout << "NO" << '\n';
            return;
        }
    }
    else{
        if(freq[temp]!=0){
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