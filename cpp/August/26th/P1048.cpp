#include<bits/stdc++.h>
using namespace std;
int dp[1005];//dp[j]表示总重量不超过j的情况下的最大价值
int tim[105],val[105];
int main(){
    int t,m;
    cin>>t>>m;
    for(int i=1;i<=m;i++){
        cin>>tim[i]>>val[i];
    }
    for(int i=1;i<=m;i++){
        //枚举每株草药
        for(int j=t;j>=tim[i];j--){
            dp[j]=max(dp[j],dp[j-tim[i]]+val[i]);
        }
    }
    cout<<dp[t]<<endl;
    return 0;
}