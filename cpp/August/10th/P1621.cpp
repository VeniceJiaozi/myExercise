#include<bits/stdc++.h>
using namespace std;
int a,b,p;
const int MAXN=1e5+10;
int father[MAXN];
bool prime[MAXN];
int find(int x){
    return father[x]==x?x:father[x]=find(father[x]);
}
void merge(int x,int y){
    int fx=find(x),fy=find(y);
    if(fx!=fy){
        father[fx]=fy;
    }
}
int main(){
    scanf("%d%d%d",&a,&b,&p);
    //初始化并查集
    for(int i=1;i<=b;i++){
        father[i]=i;
    }
    fill(prime+2,prime+MAXN,true);//初始化素数表
    //筛法求素数
    for(int i=2;i<=b;i++){
        if(prime[i]){
            for(int j=i*2;j<=b;j+=i){
                prime[j]=false;
            }
        }
    }
    //遍历所有素数，若为>=p的公共质因数，则合并
    for(int i=p;i<=b;i++){
        if(!prime[i])continue;
        if(prime[i]){
            int start=(a+i-1)/i*i;
            int first=-1;
            for(int j=start;j<=b;j+=i){
                if(first==-1){
                    first=j;
                }
                else{
                    merge(first,j);
                }
            }
        }
        if(1LL*i*i<=b)
            for(int j=i*i;j<=b;j+=i){
                prime[j]=false;
            }
    }
    int ans=0;
    for(int i=a;i<=b;i++){
        if(find(i)==i)ans++;
    }
    printf("%d\n",ans);
    return 0;
}