#include<bits/stdc++.h>
using namespace std;
int n,m;
const int MAXN=1501;
const int dx[4]={0,0,1,-1};
const int dy[4]={1,-1,0,0};
bool blocked[MAXN][MAXN];//记录是否是墙
int vis[MAXN][MAXN][3];//[0]==1表示访问过,[1]表示取模前lx，[2]表示取模前ly
int start_x,start_y;//起点坐标
bool flag=0;//记录是否到达无限远
void dfs(int x,int y,int lx,int ly){
    if(flag)return;
    if(vis[x][y][0]&&(vis[x][y][1]!=lx||vis[x][y][2]!=ly)){
        flag=1;
        return;
    }
    vis[x][y][0]=1;
    vis[x][y][1]=lx;
    vis[x][y][2]=ly;
    for(int i=0;i<4;i++){
        int nx=(x+dx[i]+n)%n,ny=(y+dy[i]+m)%m;
        int lnx=lx+dx[i],lny=ly+dy[i];
        if(!blocked[nx][ny]){
            if(vis[nx][ny][1]!=lnx||vis[nx][ny][2]!=lny||!vis[nx][ny][0])
                dfs(nx,ny,lnx,lny);
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while(cin>>n>>m){
        flag=0;
        memset(vis,0,sizeof(vis));
        memset(blocked,0,sizeof(blocked));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                char c;
                cin>>c; 
                if(c=='#'){
                    blocked[i][j]=1;
                }
                else if(c=='S'){
                    start_x=i;
                    start_y=j;
                }
            }
        }
        dfs(start_x,start_y,start_x,start_y);
        if(flag)cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}