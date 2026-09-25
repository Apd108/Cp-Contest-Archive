#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;
  string s;
  cin >> s;
  int sum=0;
  int k=0;
  for(int i=1;i<s.size();i++){
    if(s[i]==s[i-1])
        k++;
    }
    
  cout << k <<'\n';
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    {
        solve();
    }
    return 0;
}