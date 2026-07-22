#include<bits/stdc++.h>
using namespace std;
struct node{
    int x,y;
}b,m;
int main()
{   
    cin>>b.x>>b.y>>m.x>>m.y;
    b.x+=2;b.y+=2;m.x+=2;m.y+=2;
    //起点设为(2,2)防止越界
    long long a[25][25];bool flag[25][25];
    memset(flag,1,sizeof(flag));
    memset(a,0,sizeof(a));
    a[2][2]=1;
    flag[m.x][m.y]=0;
    flag[m.x-1][m.y-2]=0;flag[m.x-2][m.y-1]=0;flag[m.x+2][m.y-1]=0;flag[m.x+1][m.y-2]=0;
    flag[m.x-1][m.y+2]=0;flag[m.x-2][m.y+1]=0;flag[m.x+2][m.y+1]=0;flag[m.x+1][m.y+2]=0;
    for(int i=2;i<=b.x;i++){
        for(int j=2;j<=b.y;j++){
            if(i==2&&j==2)continue;
            if(!flag[i][j]){
                a[i][j]=0;
            }
            else{
                a[i][j]=a[i-1][j]+a[i][j-1];
            }
        }
    }
    cout<<a[b.x][b.y];
    return 0;
}