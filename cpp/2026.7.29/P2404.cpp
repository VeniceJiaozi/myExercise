#include<bits/stdc++.h>
using namespace std;
int n;
int dep=0,path[105];
void dfs(int remain,int last)
//remain表示剩余的数字，last表示上一个数字
{
    if(remain==0){
        if(dep>=2){
            for(int i=0;i<dep;i++){
                if(i>0)printf("+");
                printf("%d",path[i]);
            }
            printf("\n");
        }   
        return;
    }
    for(int num=last;num<=remain;num++){
        path[dep]=num;
        dep++;
        dfs(remain-num,num);
        dep--;
    }
}
int main()
{
    //是一个递归
    scanf("%d",&n);
    dfs(n,1);
    return 0;
}