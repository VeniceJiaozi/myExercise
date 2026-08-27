#include<bits/stdc++.h>
using namespace std;
int v[30],p[30];
long long dp[30][30005];//dp[i][j]表示前i个物品，容量为j时能获得的最大价值
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=m;i++)
        cin>>v[i]>>p[i];
    for(int i=1;i<=m;i++){
        //枚举每个物品
        for(int j=1;j<=n;j++){
            //枚举容量
            int w=p[i]*v[i];
            if(j>=v[i]){
                dp[i][j]=max(dp[i-1][j],dp[i-1][j-v[i]]+w);
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    cout<<dp[m][n]<<endl;
    return 0;
}