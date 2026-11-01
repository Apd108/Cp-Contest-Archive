#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int h,w,n,q;
  cin >> h >> w >> n >> q;
  vector<int>r(n);
  vector<int>c(n);
  for(int i=0;i<n;i++){
    cin >> r[i] >> c[i];
  }  
  sort(r.begin(),r.end());
  sort(c.begin(),c.end());
  for(int i=0;i<q;i++){
    int x;
    cin >> x;
    int t1,t2;
    cin >> t1 >> t2;
    if(x==1){
        auto it1=lower_bound(r.begin(),r.end(),t1);
        auto it2=upper_bound(r.begin(),r.end(),t2);
        cout << it2-it1 << '\n';
    }
    else{
        auto it1=lower_bound(c.begin(),c.end(),t1);
        auto it2=upper_bound(c.begin(),c.end(),t2);
        cout << it2-it1 << '\n';
    }
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