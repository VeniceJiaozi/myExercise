#include<bits/stdc++.h>
using namespace std;
int n;
const int MAXN=1e6+5;
pair<int,int> a[MAXN];//存储二叉树，pair存储左子结点和右结点
int ans=0;
void dfs(int x,int depth){
    //叶子结点
    if(a[x].first==0&&a[x].second==0){
        ans=max(ans,depth);
        return;
    }
    //左子树
    if(a[x].first!=0)
        dfs(a[x].first,depth+1);
    //右子树
    if(a[x].second!=0)
        dfs(a[x].second,depth+1);
}
int main()
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int l,r;
        scanf("%d%d",&l,&r);
        a[i]={l,r};
    }
    dfs(1,1);//从根结点开始深搜
    printf("%d",ans);
    return 0;
}