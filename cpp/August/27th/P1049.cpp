#include<bits/stdc++.h>
using namespace std;
int a;
int dp[20005];
int main(){
    int v,n;
    cin>>v>>n;
    for(int i=1;i<=n;i++){
        cin>>a;
        for(int j=v;j>=a;j--)
            dp[j]=max(dp[j],dp[j-a]+a);
    }
    cout<<v-dp[v]<<endl;
    return 0;
}