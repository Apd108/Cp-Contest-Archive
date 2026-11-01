#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
  int n,d;
  cin >> n >> d;
  int temp=n;int temp1=n;int dig=0;
  int y=-1;
  while(temp){
    dig++; 
    temp/=10;
  }
  if(dig==1 && n==d){
    cout << n+1 << '\n';
    return;
  }
  int a=0;
  vector<int>zero;
  while(temp1){
     a++;
     int x=temp1%10;
     if(d==9){
        if((x==d || x==d-1) && a==dig){
            y=a;
        }
     }
     if(x==d && a==dig){
        y=a-1;
        zero.push_back(y);
     }
     else if(x==d && a!=dig){
        y=a-1;
        zero.push_back(y);
     }
     temp1/=10;
  }
  int c=pow(10,y+1);
  int b=pow(10,y);
  int sum=0;
  if(y==-1){
    cout << n << '\n';
    return;
  }
  else{
    if(d!=0){
        cout << n+(b-(n%b)) << '\n';
    }
    else{
        for(int i=0;i<zero.size();i++){
            sum+=pow(10,i);
        }
        cout << n+sum << '\n';
    }
  }
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