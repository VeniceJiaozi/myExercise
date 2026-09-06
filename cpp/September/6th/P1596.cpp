#include<bits/stdc++.h>
using namespace std;
const int MAXN=105;
int ans=0;
int n,m;
bool my_map[MAXN][MAXN];
int dx[8]={1,-1,0,0,1,1,-1,-1};
int dy[8]={0,0,1,-1,1,-1,1,-1};
void fill(int x,int y){
    my_map[x][y]=0;
    for(int i=0;i<8;i++){
        int nx=x+dx[i];
        int ny=y+dy[i];
        if(nx>=0&&nx<n&&ny>=0&&ny<m&&my_map[nx][ny]){
            fill(nx,ny);
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>m;
    char x;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>x;
            if(x=='W'){
                my_map[i][j]=true;
            }
            else{
                my_map[i][j]=false;
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(my_map[i][j]){
                fill(i,j);
                ans++;
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}