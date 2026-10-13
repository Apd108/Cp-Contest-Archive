#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n,m;
  cin >> n;
  vector<int> a(n);
  for(auto &x:a) cin >> x;
  cin >> m;
  vector<int> b(m);
  for(auto &x:b) cin >> x;
  vector<int> c(n);
  int run_sum=0;
  for(int i=0;i<n;i++){
    run_sum+=a[i];
    c[i]=run_sum;
  }
  for(int i=0;i<m;i++){
    int high=n-1;int low=0;
    int ans=0;
    while(low<=high){
        int mid=low+((high-low)/2);
        if(c[mid]>=b[i]){
            high=mid-1;
            ans=mid+1;
        }
        else low=mid+1;
    }
    cout << ans << '\n';
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