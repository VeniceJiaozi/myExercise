#include<bits/stdc++.h>
using namespace std;
struct point{
    int x,y,z;
}p[100005];
bool cmp(point a,point b){
    return a.z<b.z;
}
double dis(point a,point b){
    return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y)+(a.z-b.z)*(a.z-b.z));
}
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d%d%d",&p[i].x,&p[i].y,&p[i].z);
    }
    sort(p,p+n,cmp);
    double ans=0;
    for(int i=0;i<n-1;i++){
        ans+=dis(p[i],p[i+1]);
    }
    printf("%.3lf",ans);
}