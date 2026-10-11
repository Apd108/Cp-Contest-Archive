#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n;
  cin >> n;
  int k=0;
  int temp=n;
  while(temp>2){
    temp/=3;
    k++;
  } 
  int y=0;int price=0;
  while(k>=0){
    int x=pow(3,k);
    int z=pow(3,(k+1));
    int b=pow(3,(k-1));
    y=n/x;
    n%=x;
    price+=y*(z+(k*b));
    k--;
  }
  cout << price << '\n';

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