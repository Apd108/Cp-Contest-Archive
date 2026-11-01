#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int>v;
    int cnt=1;
    for(int i=0;i<n;i++){
        if(s[i]==s[i+1]) cnt++;
        else{
            v.push_back(cnt);
            cnt=1;
        }
    }
    int i=0;
    int sum1=0,sum2=0;
    int temp=k;
    while(k>=0 && i<v.size()){
        if(i%2==0){
            sum1+=v[i];
            if(k==0) break;
        }
        else if(i%2==1 && k!=0){
            if(v[i]>k){
                sum1+=v[i];
                k-=v[i];
            }
            else{
                sum1+=k;
                k=0;
            }
        }
        i++;
    }
    i=0;
    while(temp>=0 && i<v.size()){
        if(i%2==1){
            sum2+=v[i];
            if(k==0) break;
        }
        else if(i%2==0 && temp!=0){
            if(v[i]>temp){
                sum2+=v[i];
                temp-=v[i];
            }
            else{
                sum2+=temp;
                temp=0;
            }
        }
        i++;
    }
    cout << max(sum1,sum2);
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    {
        solve();
    }
    return 0;
}