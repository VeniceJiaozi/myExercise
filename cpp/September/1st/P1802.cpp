#include<bits/stdc++.h>
using namespace std;
const int MAXN=1e3+5;
long long lose[MAXN],win[MAXN];
long long use[MAXN];
long long dp[MAXN][MAXN];//dp[i][j]表示前i个好友，用j个药能得到的最大值
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,x;
    cin>>n>>x;
    for(int i=1;i<=n;i++){
        cin>>lose[i]>>win[i];
        cin>>use[i];
    }
    for(int i=1;i<=n;i++){
        for(int j=0;j<=x;j++){
            dp[i][j]=dp[i-1][j]+lose[i];
            if(j>=use[i]){
                dp[i][j]=max(dp[i][j],dp[i-1][j-use[i]]+win[i]);
            }
        }
    }
    cout<<dp[n][x]*5<<endl;
    return 0;
}