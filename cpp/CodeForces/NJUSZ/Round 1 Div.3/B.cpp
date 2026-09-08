#include<bits/stdc++.h>
using namespace std;
const int MAXN=1e6;
vector<int> spf(MAXN+5);//最小质因数
void sieve(){
    //线性筛
    for(int i=1;i<=MAXN;i++) spf[i]=i;
    for(int i=2;i*i<=MAXN;i++){
        if(spf[i]==i){
            for(int j=i*i;j<=MAXN;j+=i){
                if(spf[j]==j) spf[j]=i;
            }
        }
    }
}
void solve(){
    int n;
    cin>>n;
    map<int,int> mp;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        while(x>1){
            int p=spf[x];
            int cnt=0;
            while(x%p==0){
                x/=p;
                cnt++;
            }
            mp[p]+=cnt;
        }
    }

    bool possible=true;
    for(auto const& [p,cnt]:mp){
        if(cnt%n!=0){
            possible=false;
            break;
        }
    }
    if(possible) cout<<"YES\n";
    else cout<<"NO\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    sieve();
    while(t--){
        solve();
    }
    return 0;
}