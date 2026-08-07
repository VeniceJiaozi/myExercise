#include<bits/stdc++.h>
using namespace std;
int n,m,a,b,ans;
const int MAXN=1e3+5;
int father[MAXN];
bool vis[MAXN];
int find(int x){
    if(father[x]==x)return x;
    return father[x]=find(father[x]);
}
int main(){
    while(cin>>n){
        ans=0;
        for(int i=1;i<=n;i++){
            vis[i]=false;
        }
        if(!n)break;
        cin>>m;
        //初始化并查集
        for(int i=1;i<=n;i++){
            father[i]=i;
        }
        //合并
        for(int i=0;i<m;i++){
            scanf("%d%d",&a,&b);
            int fa=find(a),fb=find(b);
            if(fa!=fb){
                father[fa]=fb;
            }
        }
        //查询
        for(int i=1;i<=n;i++){
            int fi=find(i);
            if(!vis[fi]){
                ans++;
                vis[fi]=true;
            }
        }
        cout<<ans-1<<endl;
    }
    return 0;
}