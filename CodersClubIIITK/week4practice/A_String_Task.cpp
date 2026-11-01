#include<bits/stdc++.h>
using namespace std;
#define int long long
int isVowel(char ch){
    string str = "aeiouy";
    return (str.find(ch) != string::npos);
}
void solve(){
    string s;
    cin >> s;
    vector<char>v;
    for(int i=0;i<s.size();i++){
        s[i]=tolower(s[i]);
        if(!isVowel(s[i])){
            v.push_back('.');
            v.push_back(s[i]);
        }
    }
    for(auto x:v) cout << x;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    {
        solve();
    }
    return 0;
}