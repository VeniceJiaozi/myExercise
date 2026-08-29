#include<bits/stdc++.h>
using namespace std;
const int MAXN=10005;
int dp[MAXN];
int val[MAXN],cost[MAXN];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int v,n,c;
    cin>>v>>n>>c;
    int sum=0;
    for(int i=1;i<=n;i++){
        cin>>val[i]>>cost[i];
        sum+=val[i];
    }
    if(sum<v){
        cout<<"Impossible"<<endl;
        return 0;
    }
    for(int i=1;i<=n;i++){
        for(int j=c;j>=cost[i];j--){
            dp[j]=max(dp[j],dp[j-cost[i]]+val[i]);
        }
    }
    for(int i=0;i<=v;i++)
        if(dp[i]>=v){
            cout<<c-i<<endl;
            return 0;
        }
    cout<<"Impossible"<<endl;
    return 0;
}