#include<bits/stdc++.h>
using namespace std;
const int MAXN=1e5+10;
vector<int> radj[MAXN];
int ans[MAXN];
int n,m;
int vis[MAXN];
void rev_dfs(int u,int val){
    vis[u]=1;
    ans[u]=val;
    for(int prev:radj[u]){
        if(!vis[prev]){
            rev_dfs(prev,val);
        }
    }
}
int main(){
    scanf("%d%d",&n,&m);
    for(int i=1;i<=m;i++){
        int u,v;
        scanf("%d%d",&u,&v);
        radj[v].push_back(u);
    }
    for(int i=n;i>=1;i--){
        if(!vis[i]){
            rev_dfs(i,i);
        }
    }
    for(int i=1;i<=n;i++){
        printf("%d ",ans[i]);
    }
    return 0;
}