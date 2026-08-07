#include<bits/stdc++.h>
using namespace std;
int main()
{
    //输入
    int r,c,k;int ans=0;
    scanf("%d%d%d",&r,&c,&k);
    char a[r+2][c+2];
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++)
        {
            scanf(" %c",&a[i][j]);
        }
    }
    //将边界标记为#
    for(int i=0;i<=r;i++){
        a[i][0]='#';
        a[i][c+1]='#';
        a[0][i]='#';
        a[r+1][i]='#';
    }
    //遍历
    //k=1特判
    if(k==1){
        for(int i=1;i<=r;i++)
        {
            for(int j=1;j<=c;j++)
            {
                if(a[i][j]=='.'){
                    ans++;
                }
            }
        }
        printf("%d",ans);
        return 0;
    }
    for(int i=1;i<=r;i++)
    {
        for(int j=1;j<=c;j++){
            if(a[i][j]=='.'){
                //向右向下遍历
                bool flag=true;
                //down
                for(int l=i;l<=i+k-1;l++){
                    if(a[l][j]=='#'){
                        flag=false;
                        break;
                    }
                }
                if(flag){
                    ans++;
                }
                flag=true;
                //right
                for(int l=j;l<=j+k-1;l++){
                    if(a[i][l]=='#'){
                        flag=false;
                        break;
                    }
                }
                if(flag){
                    ans++;
                }
                
            }
        }
    }
    printf("%d",ans);
    return 0;
}