#include<bits/stdc++.h>
using namespace std;
int m;
const int MAXN=1005;
int dx[4]={0,0,1,-1},dy[4]={1,-1,0,0};//四个方向
int danger[MAXN][MAXN];//记录第i行j列出现危险的时间，当danger[i][j]=1e9时表示终点
int dis[MAXN][MAXN];//记录第一次到i,j的时间
void bfs()
{
    queue<pair<int,int>>q;
    q.push({0,0});
    dis[0][0]=0;
    while(!q.empty()){
        pair<int,int>now=q.front();
        q.pop();
        int nx=now.first,ny=now.second,nt=dis[nx][ny];
        if(danger[nx][ny]==99999){
            printf("%d\n",nt);
            return;
        }
        for(int i=0;i<4;i++){
            int nnx=nx+dx[i],nny=ny+dy[i],nnt=nt+1;
            if(nnx>=0&&nnx<=1000&&nny>=0&&nny<=1000&&dis[nnx][nny]==-1&&danger[nnx][nny]>nnt){
                dis[nnx][nny]=nnt;
                q.push({nnx,nny});
            }
        }
    }
    printf("-1\n");
    return;
}
int main()
{
    for(int i = 0; i <= 1000; i++)
        for(int j = 0; j <= 1000; j++)
            danger[i][j] = 99999;
    memset(dis,-1,sizeof(dis));
    scanf("%d",&m);
    int xx,yy,tt;
    for(int i=0;i<m;i++){
        scanf("%d%d%d",&xx,&yy,&tt);
        danger[xx][yy]=min(danger[xx][yy],tt);
        for(int j=0;j<4;j++){
            int nx=xx+dx[j],ny=yy+dy[j];
            if(nx>=0&&nx<=1000&&ny>=0&&ny<=1000)
                danger[nx][ny]=min(danger[nx][ny],tt);
        }
    }
    if(danger[0][0]==0){
        printf("-1\n");
        return 0;
    }
    bfs();
    return 0;
}