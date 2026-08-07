#include<bits/stdc++.h>
using namespace std;
int n,m;
int sx,sy,fx,fy;
const int MAXN=305;
char ch[MAXN][MAXN];//存储地图
bool vis[MAXN][MAXN];//记录是否经过或是否是障碍物
int huati_x1[26],huati_y1[26],huati_x2[26],huati_y2[26];//记录滑梯的起点坐标
int dx[4]={0,0,1,-1},dy[4]={1,-1,0,0};//方向数组
void bfs(){
    queue<tuple<int,int,int>>q;
    q.push(make_tuple(sx,sy,0));
    vis[sx][sy]=1;
    while(!q.empty()){
        tuple<int,int,int>u=q.front();
        int curx=get<0>(u),cury=get<1>(u),step=get<2>(u);
        q.pop();
        if(curx==fx&&cury==fy){
            printf("%d",step);
            return;
        }
            for(int i=0;i<4;i++){
                int nx=curx+dx[i],ny=cury+dy[i];
                if(nx<0||nx>=n||ny<0||ny>=m)continue;
                if(ch[nx][ny]=='#')continue;
                if(ch[nx][ny]>='A'&&ch[nx][ny]<='Z'){
                    int id=ch[nx][ny]-'A';
                    int tx=nx,ty=ny;
                    if(huati_x1[id]==nx&&huati_y1[id]==ny){
                        tx=huati_x2[id],ty=huati_y2[id];
                    }
                    else{
                        tx=huati_x1[id],ty=huati_y1[id];
                    }
                    if(!vis[tx][ty]){
                    vis[tx][ty]=1;
                    q.push(make_tuple(tx,ty,step+1));
                    }
                }
                else if(!vis[nx][ny]){
                    vis[nx][ny]=1;
                    q.push(make_tuple(nx,ny,step+1));
                }
            }

    }
    return;
}
int main()
{
    //输入及初始化
    memset(huati_x1,-1,sizeof(huati_x1));
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++){
        scanf("%s",ch[i]);
        for(int j=0;j<m;j++){
            if(ch[i][j]=='#'){
                vis[i][j]=1;
            }
            if(ch[i][j]=='@'){
                sx=i,sy=j;
            }
            if(ch[i][j]=='='){
                fx=i,fy=j;
            }
            if(ch[i][j]>='A'&&ch[i][j]<='Z'){
                if(huati_x1[ch[i][j]-'A']==-1){
                    huati_x1[ch[i][j]-'A']=i;
                    huati_y1[ch[i][j]-'A']=j;
                }
                else{
                    huati_x2[ch[i][j]-'A']=i;
                    huati_y2[ch[i][j]-'A']=j;
                }
            }
        }
    }
    bfs();
    return 0;
}