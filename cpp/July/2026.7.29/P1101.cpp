#include<bits/stdc++.h>
using namespace std;
const string word="yizhong";
const int MAXN=105;
char c[MAXN][MAXN];//存储输入的字符
bool flag[MAXN][MAXN];//标记是否合法
int n;
int dx[8]={0,0,1,1,1,-1,-1,-1},dy[8]={1,-1,1,0,-1,1,0,-1};//八个方向
void fill(int x,int y,int dir){
    for(int i=1;i<7;i++){
        int nx=x+dx[dir]*i,ny=y+dy[dir]*i;
        if(nx<0||ny<0||nx>=n||ny>=n||c[nx][ny]!=word[i])
            return;
    }
        
    for(int i=0;i<7;i++)
        flag[x+dx[dir]*i][y+dy[dir]*i]=true;
    return;
}
int main()
{
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%s",c[i]);
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++){
            if(c[i][j]=='y'){
                for(int k=0;k<8;k++){
                    fill(i,j,k);
                }
            }
        }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(flag[i][j])
                printf("%c",c[i][j]);
            else
                printf("*");
        }
        printf("\n");
    }
    return 0;
}