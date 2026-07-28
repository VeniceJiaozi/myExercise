#include<bits/stdc++.h>
using namespace std;
const int maxn=205;
int dir[2]={-1,1};
bool vis[maxn];
int k[maxn];
bool flag;
int n,a,b;
int minn=0x3f3f3f3f;
int bfs(){
    queue<pair<int,int>>q;
    q.push({a,0});
    vis[a]=1;
    while(!q.empty()){
        pair<int,int>now=q.front();
        int cur=now.first;
        int step=now.second;
        q.pop();
        if(cur==b)return step;
        for(int i=0;i<2;i++){
            int next=cur+dir[i]*k[cur];
            if(next>=1&&next<=n&&!vis[next]){
                vis[next]=1;
                q.push({next,step+1});
            }
        }
    }
    return -1;
}
int main()
{
    scanf("%d%d%d",&n,&a,&b);
    for(int i=1;i<=n;i++)
        scanf("%d",&k[i]);
    printf("%d\n",bfs());
    return 0;
}