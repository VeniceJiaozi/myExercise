#include<bits/stdc++.h>
using namespace std;
int v[30],p[30];
int dp[30005];
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=m;i++)
        cin>>v[i]>>p[i];
    for(int i=1;i<=m;i++){
        for(int j=n;j>=v[i];j--){
            dp[j]=max(dp[j],dp[j-v[i]]+p[i]*v[i]);
        }
    }
    cout<<dp[n];
    return 0;
}