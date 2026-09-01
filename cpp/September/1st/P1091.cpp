#include<bits/stdc++.h>
using namespace std;
int n;
int t[105];
int dp1[105];//表示以第i个物品为结尾的最长上升子序列的长度
int dp2[105];//表示以第i个物品为起始的最长下降子序列的长度
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>t[i];
        dp1[i]=1;
        dp2[i]=1;
    }   
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(t[i]>t[j]){
                dp1[i]=max(dp1[i],dp1[j]+1);
            }
        }
    }
    for(int i=n-1;i>=0;i--){
        for(int j=n-1;j>i;j--){
            if(t[i]>t[j]){
                dp2[i]=max(dp2[i],dp2[j]+1);
            }
        }
    }
    int ans=0;
    for(int i=0;i<n;i++){
        ans=max(ans,dp1[i]+dp2[i]-1);
    }
    cout<<n-ans<<endl;
    // for(int i=0;i<n;i++)
    //     cout<<dp1[i]<<" ";
    return 0;
}