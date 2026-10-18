#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  double n;
  cin >> n;
  vector<int>v(n);
  double sum=0;
  for(auto &x:v){
    cin >> x;
    sum+=x;  
  }
  cout << fixed << setprecision(12) << sum/n << '\n';
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    {
        solve();
    }
    return 0;
}