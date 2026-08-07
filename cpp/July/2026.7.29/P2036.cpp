#include<bits/stdc++.h>
using namespace std;
const int MAXN=15;
int n,ans=1e9;
int s[MAXN],b[MAXN];
void dfs(int x,int sour,int bitter){
    if(x>n){
        if(sour==1&&bitter==0)return;
        ans=min(ans,abs(sour-bitter));
        return;
    }
    dfs(x+1,sour*s[x],bitter+b[x]);
    dfs(x+1,sour,bitter);
}
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d%d",&s[i],&b[i]);
    }
    dfs(1,1,0);
    printf("%d",ans);
    return 0;
}