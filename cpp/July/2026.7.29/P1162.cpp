#include<bits/stdc++.h>
using namespace std;
int n;
const int MAXN=35;
int s[MAXN][MAXN];
bool flag;
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
void dfs(int x,int y){
    if(!flag)return;
    if(x==0||y==0||x==n-1||y==n-1){
        //到达边界，不是闭合圈
        flag=0;
        return;
    }
    s[x][y]=3;
    //没到边界，继续搜索
    for(int i=0;i<4;i++){
        int nx=x+dx[i],ny=y+dy[i];
        if(nx<0||ny<0||nx>=n||ny>=n||s[nx][ny]!=0)continue;
        dfs(nx,ny);
        if(!flag)return;
        //没有搜索到边界
        //s[nx][ny]=2;
    }
}
int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&s[i][j]);
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++){
            if(s[i][j]==0){
                flag=1;
                dfs(i,j);
                if(!flag){
                    for(int a=0;a<n;a++){
                        for(int b=0;b<n;b++)
                            if(s[a][b]==3)
                                s[a][b]=0;
                    }
                }
                else{
                    for(int a=0;a<n;a++){
                        for(int b=0;b<n;b++)
                            if(s[a][b]==3)
                                s[a][b]=2;
                    }
                }
            }
        }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            printf("%d ",s[i][j]);
        printf("\n");
    }
    return 0;
}