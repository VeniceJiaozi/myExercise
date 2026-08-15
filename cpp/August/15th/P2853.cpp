#include<bits/stdc++.h>
using namespace std;
bool reach[1001][1001];//reach[i][j]表示从i到j可达
int k,n,m;
int cow[1001];
vector<int> adj[1001];
void dfs(int start,int u){
    for(int v:adj[u]){
        if(!reach[start][v]){
            reach[start][v]=true;
            dfs(start,v);
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>k>>n>>m;
    for(int i=0;i<k;i++){
        cin>>cow[i];
    }
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
    }
    for(int i=0;i<k;i++){
        reach[i][cow[i]]=true;
        dfs(i,cow[i]);
    }
    long long ans=0;
    for(int i=1;i<=n;i++){
        bool all=true;
        for(int j=0;j<k;j++){
            if(!reach[j][i]){
                all=false;
                break;
            }
        }
        if(all){
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}