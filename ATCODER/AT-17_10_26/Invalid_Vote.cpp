#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
 int n,m;
    cin >> n >> m;
    vector<string>a(n);
    vector<string>b(m);
    vector<int>v(n,0);
    for(auto &x:a) cin >> x;
    for(auto &x:b) cin >> x;
    for(int i=0;i<m;i++){
        int x=0,cnt=0,idx=-1;
        for(int j=0;j<n;j++){
            if(b[i]==a[j]){
                v[j]++;
                x=1;
                break;
            }
            else if(b[i].size()==a[j].size()){
                int temp=0;
                for(int k=0;k<a[j].size();k++){
                    if(b[i][k]!=a[j][k]) temp++;
                }
                if(temp==1){
                    cnt++;
                    idx=j;
                }
            }
        }
        if(x==0 && cnt==1) v[idx]++;
    }
    for(auto x:v) cout << x << '\n';
  
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    {
        solve();
    }
    return 0;
}