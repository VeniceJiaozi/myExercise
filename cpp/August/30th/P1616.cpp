#include<bits/stdc++.h>
using namespace std;
const int MAXN=10005;
long long dp[MAXN];
int cost[MAXN],val[MAXN];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,m;
    cin>>t>>m;
    for(int i=1;i<=m;i++){
        cin>>cost[i]>>val[i];
    }
    for(int i=1;i<=m;i++){
        for(int j=cost[i];j<=t;j++){
            dp[j]=max(dp[j],dp[j-cost[i]]+val[i]);
        }
    }
    cout<<dp[t]<<endl;
    return 0;
}