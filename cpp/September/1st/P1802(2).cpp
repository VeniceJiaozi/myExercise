#include<bits/stdc++.h>
using namespace std;
const int MAXN=1e3+5;
int lose[MAXN],win[MAXN];
int use[MAXN];
int dp[MAXN];
int n,x;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>x;
    for(int i=1;i<=n;i++){
        cin>>lose[i]>>win[i];
        cin>>use[i];
    }
    for(int i=1;i<=n;i++){
        for(int j=x;j>=use[i];j--){
            dp[j]=max(dp[j]+lose[i],dp[j-use[i]]+win[i]);
        }
        for(int j=use[i]-1;j>=0;j--){
            dp[j]+=lose[i];
        }
    }
    cout<<dp[x]*5ll<<endl;
    return 0;
}