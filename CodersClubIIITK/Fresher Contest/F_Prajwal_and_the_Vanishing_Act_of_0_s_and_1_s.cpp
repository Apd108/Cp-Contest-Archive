#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;
  string s;
  cin >> s;
  int one=0;
  int zero=0;
  for(int i=0;i<n;i++){
    one+=(s[i]=='1');
    zero+=(s[i]=='0');
  }
  cout << abs(one-zero) << '\n';
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    {
        solve();
    }
    return 0;
}