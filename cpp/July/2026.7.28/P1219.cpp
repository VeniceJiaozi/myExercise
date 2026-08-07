#include<bits/stdc++.h>
using namespace std;
int n;int ans[15];
bool v1[15];//第i列被占用
bool v2[30];//第i个主对角线被占用
bool v3[30];//第i个副对角线被占用
int sum;//总方案数
void print(){
    sum++;
    if(sum<=3){
        for(int i=0;i<n;i++){
            printf("%d ",ans[i]+1);
        }
        printf("\n");
    }
    return;
}
void vis(int x,int y,bool flag){//第x行第y列被占用或取消占用
    if(flag)
        ans[x]=y;
    v1[y]=flag;
    v2[x+y]=flag;
    v3[x-y+n-1]=flag;
    return;
}
void dfs(int x){//第x行
    if(x==n){
        print();
    }
    for(int j=0;j<n;j++){
        if(!v1[j]&&!v2[x+j]&&!v3[x-j+n-1]){
            vis(x,j,1);
            if(x==n-1){
                print();
            }
            else{
                dfs(x+1);
            }
            vis(x,j,0);
        }
        
    }
}
int main()
{   
    scanf("%d",&n);
    dfs(0);
    printf("%d",sum);
    return 0;
}