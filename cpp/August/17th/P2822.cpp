#include<bits/stdc++.h>
using namespace std;
const int MAXN=2001;
int c[MAXN][MAXN];//组合数模k
int sum[MAXN][MAXN];//前缀和
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t,k;
    cin>>t>>k;
    for(int i=0;i<MAXN;i++){
        c[i][0]=1%k;
        c[i][i]=1%k;
    }
    for(int i=1;i<MAXN;i++)
        for(int j=1;j<=i;j++)
            if(j<i)
                c[i][j]=(c[i-1][j]+c[i-1][j-1])%k;
    for(int i=0;i<MAXN;i++)
        for(int j=0;j<MAXN;j++){
            int val=(j<=i&&c[i][j]==0)?1:0;
            sum[i][j]=val;
            if(i>0)sum[i][j]+=sum[i-1][j];
            if(j>0)sum[i][j]+=sum[i][j-1];
            if(i>0&&j>0)sum[i][j]-=sum[i-1][j-1];
        }
    while(t--){
        int n,m;
        cin>>n>>m;
        m=min(n,m);
        cout<<sum[n][m]<<endl;
    }
    return 0;
}