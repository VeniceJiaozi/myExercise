#include<bits/stdc++.h>
using namespace std;
int a[1005],dp[10005];
const int MOD=1e9+7;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n,w;
    cin>>n>>w;
    //int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    dp[0]=1;
    for(int i=1;i<=w;i++){
        //枚举钱
        for(int j=0;j<n;j++){
            //枚举金额
            if(i-a[j]>=0)
                dp[i]=(dp[i]+dp[i-a[j]])%MOD;
        }
    }
    cout<<dp[w]<<endl;
    return 0;
}