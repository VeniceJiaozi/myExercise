#include<bits/stdc++.h>
using namespace std;
const int MAXN=1e5+10;
struct node{
    int x,y,op;
}option[MAXN];
int t,n;
int father[2*MAXN],vals[2*MAXN];
int cnt;
bool cmp(node a,node b){
    return a.op>b.op;
}
inline int find(int a){
    return father[a]==a?a:father[a]=find(father[a]);
}
void merge(int a,int b){
    int fa=find(a),fb=find(b);
    if(fa!=fb)father[fb]=fa;
}
int main()
{
    scanf("%d",&t);
    while(t--)
    {
        bool flag=true;
        scanf("%d",&n);
        cnt=0;
        for(int i=0;i<n;i++){
            scanf("%d%d%d",&option[i].x,&option[i].y,&option[i].op);
            vals[cnt++]=option[i].x;
            vals[cnt++]=option[i].y;
        }
        sort(vals,vals+cnt);
        cnt=unique(vals,vals+cnt)-vals;//cnt表示去重后的元素个数
        for(int i=0;i<n;i++){
            option[i].x=lower_bound(vals,vals+cnt,option[i].x)-vals;
            option[i].y=lower_bound(vals,vals+cnt,option[i].y)-vals;
        }
        for(int i=0;i<cnt;i++) father[i]=i;
        sort(option,option+n,cmp);//把所有等于的操作放到最前面
        //获得第一个不等操作的下标
        int firstZero=n;
        for(int i=0;i<n;i++){
            if(option[i].op==0){
                firstZero=i;
                break;
            }
        }
        for(int i=0;i<firstZero;i++){
            merge(option[i].x,option[i].y);
        }
        for(int i=firstZero;i<n;i++){
            if(find(option[i].x)==find(option[i].y)){
                printf("NO\n");
                flag=false;
                break;
            }
        }
        if(flag) printf("YES\n");
    }
    return 0;
}