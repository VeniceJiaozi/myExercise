#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>> adj[1505];//first表示节点，second表示边权
int n,m;
int ans=0;
const long long NEG_INF=-1e18;
bool vis[1505];
bool flag;
long long memo[1505];
void dfs(int u,long long dis){//u表示结点，dis表示距离
    if(u==n){
        memo[u]=0;
        flag=1;
        vis[u]=1;
        return ;
    }
    if(vis[u]){
        if(memo[u]!=NEG_INF){
            return ;
        }
    }
    vis[u]=1;
    memo[u]=NEG_INF;
    for(pair<int,int> p:adj[u]){
        int v=p.first,w=p.second;
        dfs(v,dis+w);
        if(memo[v]!=NEG_INF){
            memo[u]=max(memo[u],(long long)w+memo[v]);
        }
    }
    return ;
}
int main(){
    scanf("%d%d",&n,&m);
    for(int i=1;i<=m;i++){
        int u,v,w;
        scanf("%d%d%d",&u,&v,&w);
        adj[u].push_back(make_pair(v,w));
    }
    dfs(1,0);
    if(flag)
        printf("%lld",memo[1]);
    else
        printf("-1");
    return 0;
}