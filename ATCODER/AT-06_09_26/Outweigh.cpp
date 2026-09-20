#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;
  vector<int>a(n);
  vector<int>b(n);
  for(auto &x:a) cin >> x;  
  for(auto &x:b) cin >> x;
  bool y_n=false;
  for(int i=0;i<n;i++){
    if(a[i]>b[i]){
        y_n=1;
        break;
    }
  }
  if(y_n) cout << "Yes" << '\n';
  else{
    cout << "No" << '\n';
    return;
  }
  int g=0;
  int s=0;
  for(int i=0;i<n;i++){
    if(b[i]>a[i]) s+=b[i]-a[i];
    else if(a[i]>b[i]) g+=a[i]-b[i];
   }
  int s_ans=1;
  int g_ans=0;
  if(g>s){
    g_ans=1;
  } else g_ans=((s/g)+1);
  vector<int>w(n);
  for(int i=0;i<n;i++){
    if(a[i]<b[i]) cout << s_ans << " ";
    else cout << g_ans << " ";
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