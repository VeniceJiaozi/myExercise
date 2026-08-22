#include<bits/stdc++.h>
using namespace std;
int n,m,c;
const int MAXN=1005;
int val[MAXN][MAXN];
int s[MAXN][MAXN];//前缀和数组
int MAXX=-0x7fffffff;
int ans_x,ans_y;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m>>c;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++){
            cin>>val[i][j];
            s[i][j]=s[i-1][j]+s[i][j-1]-s[i-1][j-1]+val[i][j];  
        }
    for(int i=c;i<=n;i++){
        for(int j=c;j<=m;j++){
            int sum=s[i][j]-s[i-c][j]-s[i][j-c]+s[i-c][j-c];
            if(sum>MAXX){
                MAXX=sum;
                ans_x=i-c+1;
                ans_y=j-c+1;
            }
        }
    }
    cout<<ans_x<<" "<<ans_y<<endl;
    return 0;
}