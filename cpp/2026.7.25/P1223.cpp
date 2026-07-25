#include<bits/stdc++.h>
using namespace std;
struct node{
    int t,id,deng=0;;
}a[1005];
bool cmp(node a,node b)
{
    if(a.t==b.t)
        return a.id<b.id;
    return a.t<b.t;
}
int main()
{
    int n;double ans=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i].t);
        a[i].id=i+1;
    }
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++){
        printf("%d ",a[i].id);
    }
    printf("\n");
    for(int i=1;i<n;i++){
        a[i].deng=a[i-1].deng+a[i-1].t;
        ans+=a[i].deng;
    }
    ans/=n;
    printf("%.2lf",ans);
    return 0;
}