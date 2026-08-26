#include<bits/stdc++.h>
using namespace std;
int dp[105][1005];//dp[i][j]表示前i个物品，总重量不超过j的情况下的最大价值
int tim[105],val[105];
int main(){
    int t,m;
    cin>>t>>m;
    for(int i=1;i<=m;i++){
        cin>>tim[i]>>val[i];
    }
    for(int i=1;i<=m;i++){
        //枚举每株草药
        for(int j=0;j<=t;j++){
            //枚举每一个可能的时间容量
            int not_take=dp[i-1][j];
            int take=0;
            if(j>=tim[i]){
                take=dp[i-1][j-tim[i]]+val[i];
            }
            dp[i][j]=max(take,not_take);
        }
    }
    cout<<dp[m][t]<<endl;
    return 0;
}