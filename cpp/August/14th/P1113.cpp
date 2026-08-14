#include<bits/stdc++.h>
using namespace std;
const int MAXN=10005;
int n;
int len[MAXN];//记录每个结点的值
vector<int> pre[MAXN];//记录每个结点的前驱
bool vis[MAXN];//记录每个结点是否被访问过
int memo[MAXN];//记忆化
int dfs(int x){
    if(vis[x])return memo[x];
    vis[x]=1;
    int max_pre_finish=0;//x开始的最早时刻是max(所有前驱完成的时刻)
    for(int p:pre[x]){
        max_pre_finish=max(max_pre_finish,dfs(p));
    }
    memo[x]=max_pre_finish+len[x];//x完成的时间是max(所有前驱完成的时刻)+x的长度
    return memo[x];
}
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int x;
        scanf("%d",&x);
        scanf("%d",&len[x]);
        while(1)
        {
            int y;
            scanf("%d",&y);
            if(y==0)break;
            pre[x].push_back(y);
        }
    }
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        ans=max(ans,dfs(i));
    }
    printf("%d\n",ans);
    return 0;
}