#include<bits/stdc++.h>
using namespace std;
int n,m,t,sx,sy,fx,fy;
const int MAXN=15;
int x[MAXN],y[MAXN];//障碍点坐标,1-indexed
int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};
int ans;
int vis[MAXN][MAXN];//记录是否访问过,1-indexed,-1表示障碍点,0表示未访问,1表示访问过
void dfs(int x,int y){
    if(x==fx&&y==fy){
        //到达终点
        ans++;
        return;
    }
    for(int i=0;i<4;i++){
        int nx=x+dx[i],ny=y+dy[i];
        if(nx>0&&nx<=n&&ny>0&&ny<=m&&vis[nx][ny]==0){
            vis[nx][ny]=1;
            dfs(nx,ny);
            vis[nx][ny]=0;
        }
    }
}
int main()
{
    scanf("%d%d%d%d%d%d%d",&n,&m,&t,&sx,&sy,&fx,&fy);
    for(int i=1;i<=t;i++){
        //读入障碍点
        scanf("%d%d",&x[i],&y[i]);
        vis[x[i]][y[i]]=-1;
    }
    if(sx==fx&&sy==fy){
        printf("1");
        return 0;
    }
    if(vis[sx][sy]==-1){
        printf("0");
        return 0;
    }
    vis[sx][sy]=1;
    dfs(sx,sy);
    printf("%d",ans);
    return 0;
}