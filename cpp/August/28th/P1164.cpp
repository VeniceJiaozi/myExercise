#include<bits/stdc++.h>
using namespace std;
int dp[105][10005];//dp[i][j]表示前i个菜品，j元的方案数
int c[105];//表示第i个菜品的价钱
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int m;
    int n;
    cin>>n>>m;
    dp[0][0]=1;
    for(int i=1;i<=n;i++){
        cin>>c[i];
    }
    for(int i=1;i<=n;i++){
        //考虑前i个菜品
        for(int j=0;j<=m;j++){
            //考虑花费j元
            if(j>=c[i]){
                dp[i][j]=dp[i-1][j]+dp[i-1][j-c[i]];
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    cout<<dp[n][m]<<endl;
    return 0;
}