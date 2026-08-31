#include<bits/stdc++.h>
using namespace std;
const int INF=1e9;
int dp[1005][10005];//dp[i][j]表示考虑前i种，凑出j元需要的最少张纸币
int val[1005];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,w;
    cin>>n>>w;
    //fill(dp[0],dp[0]+10005*1005,INT_MAX);
    for(int i=0;i<=n;i++)
        for(int j=0;j<=w;j++)
            dp[i][j]=INF;
    for(int i=0;i<=n;i++)
        dp[i][0]=0;
    //dp[0][0]=0;
    for(int i=1;i<=n;i++)
        cin>>val[i];
    for(int i=1;i<=n;i++){
        //枚举纸币种类
        for(int j=0;j<=w;j++){
            //枚举金额
            if(j>=val[i]){
                dp[i][j]=min(dp[i-1][j],dp[i][j-val[i]]+1);
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    cout<<dp[n][w]<<endl;
    return 0;
}