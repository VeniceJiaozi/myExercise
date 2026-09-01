#include<bits/stdc++.h>
using namespace std;
const int MAXN=1e5+5;
int a[MAXN];
int dp[MAXN];//dp[i]表示以a[i]结尾的最长上升子序列的长度
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    dp[0]=1;
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(a[i]>a[j]){
                dp[i]=max(dp[i],dp[j]);
            }
        }
        dp[i]++;
    }
    int ans=0;
    for(int i=0;i<n;i++){
        ans=max(ans,dp[i]);
    }
    cout<<ans<<endl;
    return 0;
}