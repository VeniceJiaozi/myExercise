#include<bits/stdc++.h>
using namespace std;
int n,m,sum,x,y,z,r;
int l[505][505],hc[505][505];
void clockwise(int x,int y,int r){
    //左上角x-r,y-r
    //右上角x+r,y-r
    //左下角x-r,y+r
    //右下角x+r,y+r
    //关于副对称轴对称
    for(int i=max(1,x-r);i<=min(n,x+r);i++){
        for(int j=max(1,y-r);j<=min(n,y+r);j++){
            hc[i][j]=l[x+y-j][y+i-x];
        }        
    }
    //上下翻转
    for(int i=max(1,x-r);i<=min(n,x+r);i++){
        for(int j=max(1,y-r);j<=min(n,y+r);j++){
            l[i][j]=hc[i][j];
        }
    }
    return;
}
void anticlockwise(int x,int y,int r){
    //左上角x-r,y-r
    //右上角x+r,y-r
    //左下角x-r,y+r
    //右下角x+r,y+r
    //关于副对称轴对称
    for(int i=max(1,x-r);i<=min(n,x+r);i++){
        for(int j=max(1,y-r);j<=min(n,y+r);j++){
            hc[i][j]=l[x-y+j][x+y-i];
        }        
    }
    //左右翻转
    for(int i=max(1,x-r);i<=min(n,x+r);i++){
        for(int j=max(1,y-r);j<=y+r;j++){
            l[i][j]=hc[i][j];
        }
    }
}
int main(){
    cin>>n>>m;
    sum=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            l[i][j]=sum;
            sum++;
        }
    }
    for(int i=1;i<=m;i++){
        cin>>x>>y>>r>>z;
        if(!z) clockwise(x,y,r);
        else anticlockwise(x,y,r);
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<l[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}