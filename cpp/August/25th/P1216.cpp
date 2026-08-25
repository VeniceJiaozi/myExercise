#include<bits/stdc++.h>
using namespace std;
const int MAXN=1005;
int dp[MAXN][MAXN];//dp[i][j]表示到i,j的路径的最大值
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int r;
    cin>>r;
    for(int i=1;i<=r;i++){
        for(int j=1;j<=i;j++){
            cin>>dp[i][j];
        }
    }
    if(r==1){
        cout<<dp[1][1];
        return 0;
    }
    for(int i=2;i<=r;i++){
        for(int j=2;j<=i;j++){
            int curr=max(dp[i-1][j],dp[i-1][j-1]);
            dp[i][j]+=curr;
        }
    }
    int ans=0;
    for(int i=1;i<=r;i++){
        ans=max(ans,dp[r][i]);
    }
    cout<<ans;
    return 0;
}