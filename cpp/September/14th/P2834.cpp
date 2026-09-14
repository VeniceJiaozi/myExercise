#include<bits/stdc++.h>
using namespace std;
const int MAXN=1005;
const int MAXW=10005;
const int MOD=1e9+7;
int a[MAXN];
int dp[MAXN][MAXW];//dp[i][j]表示前i种纸币，凑w元的方法数
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n,w;
    cin>>n>>w;
    for(int i=1;i<=n;i++)
        cin>>a[i];

    dp[0][0]=1;
    for(int i=1;i<=n;i++){
        //枚举种类
        for(int j=0;j<a[i];j++)
            dp[i][j]=dp[i-1][j];
        for(int j=a[i];j<=w;j++){
            //枚举金额
            dp[i][j]=(dp[i-1][j]+dp[i][j-a[i]])%MOD;
        }
    }
    cout<<dp[n][w]<<endl;
    return 0;
}