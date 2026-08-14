#include<bits/stdc++.h>
using namespace std;
const int MAXN=5005;
const int MOD=80112002;
int n,m;
vector<int> adj[MAXN],pre[MAXN];
int ans[MAXN];//记录到每个结点的最短路径长度
int cnt;//记录未被删除的结点个数
bool vis[MAXN];//记录结点是否被删除
int ANS=0;//记录答案
int main(){
    scanf("%d%d",&n,&m);
    //输入边，因为需要双向，所以需要两个数组
    for(int i=0;i<m;i++){
        int u,v;
        scanf("%d%d",&u,&v);
        adj[u].push_back(v);
        pre[v].push_back(u);
    }
    //初始化，将所有入度为零的结点入列
    queue<int> q;
    for(int i=1;i<=n;i++){
        if(pre[i].size()==0){
            q.push(i);
            ans[i]=1;
        }
    }
    while(!q.empty()){
        int u=q.front();
        q.pop();
        vis[u]=true;
        for(int v:adj[u]){
            ans[v]=(ans[v]+ans[u])%MOD;
            bool flag=true;
            for(int p:pre[v]){
                if(!vis[p]){
                    flag=false;
                    break;
                }
            }
            if(flag){
                q.push(v);
            }
        }
    }
    for(int i=1;i<=n;i++){
        if(adj[i].size()==0)
            ANS=(ANS+ans[i])%MOD;
    }
    printf("%d\n",ANS);
    return 0;
}