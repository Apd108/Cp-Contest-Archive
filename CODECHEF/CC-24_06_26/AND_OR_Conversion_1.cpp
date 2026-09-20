#include<bits/stdc++.h>
using namespace std;
#define int long long
// WRONG AYA ... m chutiya hu
void solve(){
  int n;
  cin >> n;
  string a,b;
  cin >> a >> b;
  for(int i=0;i<n-1;i++){
    if(a[i]==b[i]) continue;
    else if((((a[i]-'0')|(a[i+1]-'0'))==(b[i]-'0'))||(((a[i]-'0')&(a[i+1]-'0'))==(b[i]-'0'))){
        a[i]=b[i];
        a[i+1]=b[i];
    }
    else {
        cout << "No" << '\n';
        return;
    }
  }
  if(n==2 && a[n-1]!=b[n-1]){
    cout << "No" << '\n';
    return;
  }
  cout << "Yes" << '\n';
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