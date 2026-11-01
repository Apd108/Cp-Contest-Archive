#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  vector<char>v(26);
  string a,b,s;
  cin >> a >> b >> s;
  for(int i=0;i<26;i++){
    v[a[i]-97]=b[i];
  }  
  for(int i=0;i<s.size();i++){
    if(s[i]>=65 && s[i]<97){
        s[i]=tolower(s[i]);
        char k = toupper(v[s[i]-97]);
        cout << k;
    }
    else if(s[i]>=97){
        cout << v[s[i]-97];
    }
    else cout << s[i];
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