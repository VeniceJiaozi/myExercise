#include<bits/stdc++.h>
using namespace std;
int t[105],m[105];
int dp[205][205];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,M,T;
    cin>>n>>M>>T;
    for(int i=1;i<=n;i++)
        cin>>m[i]>>t[i];
    for(int i=1;i<=n;i++){
        for(int j=M;j>=m[i];j--){
            for(int k=T;k>=t[i];k--){
                dp[j][k]=max(dp[j][k],dp[j-m[i]][k-t[i]]+1);
            }
        }
    }
    cout<<dp[M][T]<<endl;
    return 0;
}