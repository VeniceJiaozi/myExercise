#include<bits/stdc++.h>
using namespace std;
struct node{
    int m,v;
    double dw;
}a[1005];
bool cmp(node x,node y){
    return x.dw>y.dw;
}
int main()
{
    int n,t;
    cin>>n>>t;
    // int m[n+1],v[n+1];
    // double dw[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i].m>>a[i].v;
        a[i].dw=(double)a[i].v/a[i].m;
    }
    sort(a+1,a+n+1,cmp);
    double ans=0;
    for(int i=1;i<=n;i++){
        if(t>=a[i].m){
            ans+=a[i].v;
            t-=a[i].m;
        }
        else{
            ans+=t*a[i].dw;
            break;
        }
    }
    printf("%.2f",ans);
    return 0;
}