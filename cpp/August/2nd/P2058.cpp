#include<bits/stdc++.h>
using namespace std;
int n;
const int MAXN = 1e5 + 10;
int ans,num[MAXN];
struct ship{
    int x,t;
}a;
queue<ship> q;
int main(){
    //统计每艘船上的国家数，避免挨个查询乘客
    scanf("%d",&n);
    for(int i=0,t,k;i<n;i++){
        scanf("%d%d",&t,&k);
        for(int j=0,x;j<k;j++){
            scanf("%d",&x);
            q.push({x,t});
            num[x]++;
            if(num[x]==1){
                ans++;
            }
        }
        for(a=q.front();q.size()&&a.t+86400<=t;q.pop(),a=q.front()){
            num[a.x]--;
            if(num[a.x]==0){
                ans--;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}