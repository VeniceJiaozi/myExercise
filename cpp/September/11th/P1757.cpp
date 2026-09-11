#include<bits/stdc++.h>
using namespace std;
int a[1005],b[1005],c[1005],cnt[1005],g[1005][1005];
//g[i][j]表示第i组的第j个物品的编号
int dp[1005];//dp[i]表示在容量为i时能获得的最大价值
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int m,n;
    cin>>m>>n;

    int k=0;
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i]>>c[i];
        k=max(k,c[i]);
        cnt[c[i]]++;
        g[c[i]][cnt[c[i]]]=i;
    }

    //dp
    for(int i=0;i<=k;i++){
        //枚举组数
        for(int j=m;j>=0;j--){
            //枚举容量
            for(int l=1;l<=cnt[i];l++){
                //枚举物品
                if(j>=a[g[i][l]]){
                    dp[j]=max(dp[j],dp[j-a[g[i][l]]]+b[g[i][l]]);
                }
            }
        }
    }
    cout<<dp[m]<<endl;
    return 0;
}