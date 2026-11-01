#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  string s;
  cin >> s;
  set<char>k;
  for(int i=0;i<s.size();i++){
    k.insert(s[i]);
  }
  if(k.size()%2==0) cout << "CHAT WITH HER!";
  else cout << "IGNORE HIM!";
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    {
        solve();
    }
    return 0;
}