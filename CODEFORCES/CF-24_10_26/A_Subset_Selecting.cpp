#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,k;
    cin >> n >> k;
    vector<int> cnt(n+1,0);
    for (int i=0;i<n;i++) {
        int x;
        cin >> x;
        cnt[x]++;
    }
    int temp=0;
    for(int i=0;i<=n;i++){
        if(cnt[i]==0){
            cout << i << "\n";
            return;
        }
        temp+=cnt[i];
        if(temp<k){
            cout << i << "\n";
            return;
        }
        temp-=k;
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