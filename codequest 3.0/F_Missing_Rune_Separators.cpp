#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    string s;
    cin >> s;
    int i=1;    
    int cnt=0;
    int j=0;
    string temp="";
    vector<string>v(5000);
    while(i<s.size()){
        char conc=s[i-1];
        temp+=conc;
        if(s[i-1]<=s[i]){
            cnt++;
            v[j++]=s[i-1];
        }
        else temp+=s[i];
    }
    cout << cnt << '\n';
    for(auto &x:v) cout << x << '\n';
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    {
        solve();
    }
    return 0;
}