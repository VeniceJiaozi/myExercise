#include<bits/stdc++.h>
using namespace std;
int n,m;
const int MAXN=2e5+5;
int fa[MAXN];//记录每个节点的父节点
int find(int x);
bool search(int x,int y){
    int fax=find(x),fay=find(y);
    return fax==fay?1:0;//如果根节点相同，则在一个集合中
}
int find(int x){
    if(fa[x]==x)return x;
    return fa[x]=find(fa[x]);//路径压缩
}
int main(){
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)fa[i]=i;//初始化
    for(int i=0;i<m;i++){
        int z,x,y;
        scanf("%d%d%d",&z,&x,&y);
        if(z==1){
            if(search(x,y))continue;//已经在一个集合中
            int fx=find(x),fy=find(y);
            fa[fx]=fy;//合并集合
        }
        else{
            printf("%c\n",search(x,y)?'Y':'N');//输出是否在一个集合中
        }
    }
    return 0;
}