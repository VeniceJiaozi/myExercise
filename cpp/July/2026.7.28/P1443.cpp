#include<bits/stdc++.h>
using namespace std;
const int MAXN=405;
int dis[MAXN][MAXN];
int xx,yy,n,m;
int dx[8]={-2,-2,-1,1,2,2,1,-1};
int dy[8]={-1,1,2,2,1,-1,-2,-2};
void bfs(){
    queue<pair<int,int>> q;
    q.push({xx,yy});
    while(!q.empty()){
        pair<int,int> now=q.front();
        q.pop();
        int x=now.first,y=now.second;
        for(int i=0;i<8;i++){
            int nx=x+dx[i],ny=y+dy[i];
            if(nx>=1&&nx<=n&&ny>=1&&ny<=m&&dis[nx][ny]==-1){
                dis[nx][ny]=dis[x][y]+1;
                q.push({nx,ny});
            }
        }
    }
    return;
}
int main()
{
    scanf("%d%d%d%d",&n,&m,&xx,&yy);
    memset(dis,-1,sizeof(dis));
    dis[xx][yy]=0;
    bfs();
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            printf("%-5d ",dis[i][j]);
        }
        printf("\n");
    }
}