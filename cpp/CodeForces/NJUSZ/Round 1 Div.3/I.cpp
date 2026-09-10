#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,m,k,d;
    cin>>n>>m>>k>>d;
    vector<vector<long long>> a(n,vector<long long>(m));
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>a[i][j];
    
    vector<long long> sum(n);//记录第n行建桥的最小值
    //dp处理每行
    for(int i=0;i<n;i++){
        //逐行建桥
        vector<long long> dp(m);//dp[i]表示在第i列放置最后一个支撑时的最小代价
        dp[0]=1;
        //int cur=0;//表示上一次建桥的位置

        /*tle了
        for(int j=1;j<m;j++){
            long long mn=LLONG_MAX;
            int left=max(0,j-d-1);
            for(int k=left;k<j;k++){
                mn=min(mn,dp[k]);
            }
            dp[j]=mn;
            dp[j]+=a[i][j];
            dp[j]++;
        }*/

        //单调队列优化
        deque<int> dq;//存储dp的下标
        dq.push_back(0);
        for(int j=1;j<m;j++){
            //弹出左边界的过期下标
            //k>=j-d-1
            int left=j-d-1;
            while(!dq.empty()&&dq.front()<left)
                dq.pop_front();
            
            //队首极为窗口内dp最小值
            dp[j]=dp[dq.front()]+a[i][j]+1;

            //j入队
            while(!dq.empty()&&dp[dq.back()]>=dp[j])
                dq.pop_back();
            dq.push_back(j);
        }

        sum[i]=dp[m-1];
    }

    //前缀和
    long long ans=LLONG_MAX;
    vector<long long> prefix(n+1,0);
    for(int i=0;i<n;i++)
        prefix[i+1]=prefix[i]+sum[i];
    for(int i=0;i<=n-k;i++)
        ans=min(ans,prefix[i+k]-prefix[i]);
    
    cout<<ans<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--)
        solve();
    
    return 0;
}