#include<bits/stdc++.h>
using namespace std;
struct node{
    int height;
    int width;
}books[105];
bool cmp(node a,node b){
    return a.height<b.height;
}
int minn=0x7f7f7f;
//int x[105];//x[i]表示第i本书和第i+1之间的不整齐度
int dp[105][105];//dp[i][j]表示考虑前i本书,选取j本书的最小不整齐度
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    //输入
    cin>>n>>k;
    int m=n-k;
    for(int i=1;i<=n;i++){
        cin>>books[i].height>>books[i].width;
    }
    //排序
    sort(books+1,books+n+1,cmp);
    //初始化
    memset(dp,127,sizeof(dp));
    //考虑任意本书只取一本都为零
    for(int i=0;i<=n;i++)
        dp[i][1]=0;
    //dp
    for(int i=2;i<=n;i++){
        for(int j=1;j<i;j++){
            for(int l=2;l<=min(i,m);l++){
                dp[i][l]=min(dp[i][l],dp[j][l-1]+abs(books[i].width-
                    books[j].width));
            }
        }
    }
    for(int i=m;i<=n;i++){
        minn=min(minn,dp[i][m]);
    }
    cout<<minn<<endl;
    return 0;
}