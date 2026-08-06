#include<bits/stdc++.h>
using namespace std;
int n,m,p;
const int MAXN=5e3+5;
int father[MAXN];
int find(int x){
    if(father[x]==x)return x;
    return father[x]=find(father[x]);
}
int main(){
    scanf("%d%d%d",&n,&m,&p);
    for(int i=1;i<=n;i++)father[i]=i;
    for(int i=0;i<m;i++)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        int fa=find(a),fb=find(b);
        if(fa!=fb)father[fa]=fb;
    }
    for(int i=0;i<p;i++)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        int fa=find(a),fb=find(b);
        if(fa==fb)printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}