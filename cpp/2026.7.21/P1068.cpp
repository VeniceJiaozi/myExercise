#include<bits/stdc++.h>
using namespace std;
struct node{
    int id,s;
}a[100005];
bool cmp(node a,node b){
    if(a.s!=b.s){
        return a.s>b.s;
    }
    return a.id<b.id;
}
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=0;i<n;i++){
        scanf("%d%d",&a[i].id,&a[i].s);
    }
    sort(a,a+n,cmp);
    //cout<<a[0].id<<" ";
    //cout<<floor(35*1.5);
    int ans=floor(m*1.5);
    //cout<<ans<<endl;
    printf("%d ",a[ans-1].s);
    for(int i=0;i<n;i++){
        if(a[i].s<a[ans-1].s){
            printf("%d\n",i);
            break;
        }
    }
    for(int i=0;i<n;i++){
        if(a[i].s<a[ans-1].s){
            return 0;
        }
        printf("%d %d\n",a[i].id,a[i].s);
    }
    return 0;
}