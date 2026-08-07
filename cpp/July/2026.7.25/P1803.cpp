#include<bits/stdc++.h>
using namespace std;
struct node{
    int begin,end;
};
bool cmp(node a,node b){
    if(a.end==b.end)return a.begin>b.begin;
    return a.end<b.end;
}
int main(){
    int n;
    scanf("%d",&n);
    struct node a[n];
    for(int i=0;i<n;i++){
        scanf("%d%d",&a[i].begin,&a[i].end);
    }
    sort(a,a+n,cmp);
    int endtime=0,ans=0;
    for(int i=0;i<n;i++){
        if(a[i].begin>=endtime){
            endtime=a[i].end;
            ans++;
        }
    }
    printf("%d",ans);
    return 0;
}