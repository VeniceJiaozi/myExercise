#include<bits/stdc++.h>
using namespace std;
struct pos{
    int x,y,dir;
    //dir=0表示向上，1表示向右，2表示向下，3表示向左
};
pos farmer,cow;
bool mymap[12][12],xh[12][12][4][12][12][4];
int main(){
    //若某一点的坐标和方向都与之前某点重合则返回0
    //边界设为障碍物
    for(int i=0;i<12;i++) mymap[i][0]=mymap[i][11]=mymap[0][i]=mymap[11][i]=1;
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10;j++){
            char c;
            cin>>c;
            while(c!='.'&&c!='*'&&c!='F'&&c!='C')cin>>c;
            if(c=='*') mymap[i][j]=1;
            else if(c=='F') farmer.x=i,farmer.y=j,farmer.dir=0;
            else if(c=='C') cow.x=i,cow.y=j,cow.dir=0;
        }
    }
    int ans=0;
    while(farmer.x!=cow.x||farmer.y!=cow.y){
        ans++;
        if(xh[farmer.x][farmer.y][farmer.dir][cow.x][cow.y][cow.dir]){
            cout<<0<<endl;
            return 0;
        }
        else xh[farmer.x][farmer.y][farmer.dir][cow.x][cow.y][cow.dir]=1;
        //farmer
        //up
        if(farmer.dir==0){
            if(mymap[farmer.x-1][farmer.y]==0){
                farmer.x--;
            }
            else farmer.dir=1;
        }
        //right
        else if(farmer.dir==1){
            if(mymap[farmer.x][farmer.y+1]==0){
                farmer.y++;
            }
            else farmer.dir=2;
        }
        //down
        else if(farmer.dir==2){
            if(mymap[farmer.x+1][farmer.y]==0){
                farmer.x++;
            }
            else farmer.dir=3;
        }
        //left
        else if(farmer.dir==3){
            if(mymap[farmer.x][farmer.y-1]==0){
                farmer.y--;
            }
            else farmer.dir=0;
        }
        //cow
        if(cow.dir==0){
            if(mymap[cow.x-1][cow.y]==0){
                cow.x--;
            }
            else cow.dir=1;
        }
        else if(cow.dir==1){
            if(mymap[cow.x][cow.y+1]==0){
                cow.y++;
            }
            else cow.dir=2;
        }
        else if(cow.dir==2){
            if(mymap[cow.x+1][cow.y]==0){
                cow.x++;
            }
            else cow.dir=3;
        }
        else if(cow.dir==3){
            if(mymap[cow.x][cow.y-1]==0){
                cow.y--;
            }
            else cow.dir=0;
        }
        //判断是否死循环
    }
    cout<<ans<<endl;
    return 0;
}