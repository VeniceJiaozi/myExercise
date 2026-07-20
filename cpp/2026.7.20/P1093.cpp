#include<bits/stdc++.h>
using namespace std;
struct node{
    int id,chi,math,eng,sum;
}a[100005];
bool cmp(node x,node y){
    if(x.sum!=y.sum) return x.sum>y.sum;
    else if(x.chi!=y.chi) return x.chi>y.chi;
    else return x.id<y.id;
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d%d%d",&a[i].chi,&a[i].math,&a[i].eng);
        a[i].id=i+1;
        a[i].sum=a[i].chi+a[i].math+a[i].eng;
    }
    sort(a,a+n,cmp);
    for(int i=0;i<5;i++){
        printf("%d %d\n",a[i].id,a[i].sum);
    }
    return 0;
}
