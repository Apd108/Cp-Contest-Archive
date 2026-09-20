#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n,c;
  cin >> n >> c;
  vector<int> a(n),b(n);
  for(int i=0;i<n;i++) cin >> a[i];
  for(int i=0;i<n;i++) cin >> b[i];
  bool poss1=true;
  int ans1=0;
  for(int i=0;i<n;i++){
    if(a[i]<b[i]){
        poss1=false;
        break;
    } ans1+=a[i]-b[i];
  }
  vector<int> a1=a;
  vector<int> b1=b;
  sort(a1.begin(),a1.end());
  sort(b1.begin(),b1.end());
  int ans2=c;
  bool poss2=true;
  for(int i=0;i<n;i++){
    if(a1[i]<b1[i]){
        poss2=false;
        break;
    } ans2+=a1[i]-b1[i];
  }
  if(poss1==false && poss2==false) cout << -1 << '\n';
  else if(poss1==false && poss2==true) cout << ans2 << '\n';
  else if(poss2==false && poss1==true) cout << ans1 << '\n';
  else cout << min(ans1,ans2) << '\n';

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