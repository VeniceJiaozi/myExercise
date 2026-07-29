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
        // if(ch[curx][cury]>='A'&&ch[curx][cury]<='Z'){
        //     char huati=ch[curx][cury];
        //     int tx,ty;
        //     if(huati_x1[huati-'A']==curx&&vis[huati_x2[huati-'A']][huati_y2[huati-'A']]==0){
        //         //该点存在第一个数组
        //         tx=huati_x2[huati-'A'],ty=huati_y2[huati-'A'];
        //     }
        //     else if(huati_x2[huati-'A']==curx&&vis[huati_x1[huati-'A']][huati_y1[huati-'A']]==0){
        //         tx=huati_x1[huati-'A'],ty=huati_y1[huati-'A'];
        //     }
        //     if(!vis[tx][ty]){
        //         vis[tx][ty]=1;
        //         q.push(make_tuple(tx,ty,step));//传送不消耗步数
        //     }
            
        // }
        //else{
            //该点不存在滑梯
            for(int i=0;i<4;i++){
                int nx=curx+dx[i],ny=cury+dy[i];
                if(nx<0||nx>=n||ny<0||ny>=m)continue;
                if(vis[nx][ny]||ch[nx][ny]=='#')continue;
                int tx=nx,ty=ny;
                if(ch[nx][ny]>='A'&&ch[nx][ny]<='Z'){
                    int id=ch[nx][ny]-'A';
                    if(huati_x1[id]==nx){
                        tx=huati_x2[id],ty=huati_y2[id];
                    }
                    else{
                        tx=huati_x1[id],ty=huati_y1[id];
                    }
                }
                if(!vis[tx][ty]){
                    vis[tx][ty]=1;
                    q.push(make_tuple(tx,ty,step+1));
                }
            }
        //}
    }
    return;
}
int main()
{
    //输入及初始化
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
                if(huati_x1[ch[i][j]-'A']==0){
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