#include<bits/stdc++.h>
using namespace std;
const int MAXN=105;
int n,m;
char a[MAXN][MAXN];
int ans=0;
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
void fill(int x,int y){
    for(int i=0;i<4;i++){
        int nx=x+dx[i];
        int ny=y+dy[i];
        if(nx>=0&&nx<n&&ny>=0&&ny<m&&a[nx][ny]!='0'){
            a[nx][ny]='0';
            fill(nx,ny);
        }
    }
    return;
}
int main()
{
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++)
        scanf("%s",a[i]);
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            if(a[i][j]!='0')
            {
                ans++;
                a[i][j]='0';
                fill(i,j);
            }
        }
    printf("%d\n",ans);
    return 0;
}