#include<bits/stdc++.h>
using namespace std;
struct node{
    double w,v;
    int c;
};
bool cmp(node a,node b){
    if(a.v/a.w==b.v/b.w)return a.c<b.c;
    return a.v/a.w>b.v/b.w;
}
int main()
{
    int t,n,m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        node a[n];
        for(int i=0;i<n;i++){
            cin>>a[i].w>>a[i].v>>a[i].c;
        }
        sort(a,a+n,cmp);
        double ans=0;
        bool flag=1;
        for(int i=0;i<n;i++){
            if(a[i].c==-1&&flag){
                flag=0;
                while(m>=a[i].w){
                    m-=a[i].w;
                    ans+=a[i].v;
                    //cout<<m<<endl;
                }
            }
            else{
                if(m>=a[i].w){
                    m-=a[i].w;
                    ans+=a[i].v;
                    //cout<<m<<endl;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}