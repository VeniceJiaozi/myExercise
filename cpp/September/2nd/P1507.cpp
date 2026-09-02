#include<bits/stdc++.h>
using namespace std;
int dp[405][405];//dp[i][j]表示体积为i，质量为j的最大价值
int h[55],t[55],k[55];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int H,T;
    cin>>H>>T;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>h[i]>>t[i]>>k[i];
    }
    for(int i=0;i<n;i++){
        for(int j=H;j>=h[i];j--){
            for(int l=T;l>=t[i];l--){
                dp[j][l]=max(dp[j][l],dp[j-h[i]][l-t[i]]+k[i]);
            }
        }
    }
    cout<<dp[H][T]<<endl;
    return 0;
}