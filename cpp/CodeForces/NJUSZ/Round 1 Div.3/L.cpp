#include<bits/stdc++.h>
using namespace std;
const int MAXN=1e6+5;
bool dp[MAXN];//dp[i]==1表示能凑出水正好为i
void solve(){
    long long w,f;
    cin>>w>>f;
    int n;
    cin>>n;
    long long sum=0;
    vector<long long> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }

    //dp
    fill(dp,dp+sum+1,0);
    dp[0]=1;
    for(int i=0;i<n;i++){
        for(int j=sum;j>=a[i];j--){
            if(dp[j-a[i]]) dp[j]=1;
        }
    }
    long long ans=LLONG_MAX;

    for(int j=0;j<=sum;j++){
        if(!dp[j]) continue;

        long long time_water=(j+w-1)/w;
        long long time_fire=(sum-j+f-1)/f;

        long long cur_time=max(time_water,time_fire);
        ans=min(ans,cur_time);
    }
    cout<<ans<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}