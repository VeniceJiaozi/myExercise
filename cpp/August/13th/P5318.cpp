#include<bits/stdc++.h>
using namespace std;
const int MAXN=1e5+10;
vector<int> adj[MAXN];//adj[i]表示i能够到达的点
bool vis[MAXN];
int n,m;
//遍历第u个结点
void dfs(int u){
    printf("%d ",u);
    vis[u]=true;
    for(int i=0;i<adj[u].size();i++){
        int v=adj[u][i];
        if(!vis[v]){
            dfs(v);
        }
    }
}
//遍历第u个结点
void bfs(int u){
    memset(vis,0,sizeof(vis));
    queue<int> q;
    q.push(u);
    vis[u]=true;
    while(!q.empty()){
        int uu=q.front();
        q.pop();
        printf("%d ",uu);
        for(int v:adj[uu]){
            if(!vis[v]){
                q.push(v);
                vis[v]=true;
            }
        }
    }
}
int main()
{
    scanf("%d%d",&n,&m);
    for(int i=1;i<=m;i++){
        int u,v;
        scanf("%d%d",&u,&v);
        adj[u].push_back(v);
    }
    for(int i=1;i<=n;i++){
        sort(adj[i].begin(),adj[i].end());
    }
    memset(vis,0,sizeof(vis));
    dfs(1);
    printf("\n");
    bfs(1);
    return 0;
}