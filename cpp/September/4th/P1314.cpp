#include<bits/stdc++.h>
using namespace std;
const int MAXN=2e5+5;
long long n,m,s;
long long w[MAXN],v[MAXN];
long long l[MAXN],r[MAXN];
long long y,ans=1e18;
long long W,L,R;
long long cnt[MAXN],sumv[MAXN];
int check(long long W){
    long long sum1=0,sum2=0;
    memset(cnt,0,sizeof(cnt));
    memset(sumv,0,sizeof(sumv));
    for(int i=1;i<=n;i++){
        cnt[i]=cnt[i-1];
        sumv[i]=sumv[i-1];
        if(w[i]>=W){
            cnt[i]++;
            sumv[i]+=v[i];
        }
    }
    long long sum=0;
    for(int i=1;i<=m;i++){
        sum+=(cnt[r[i]]-cnt[l[i]-1])*(sumv[r[i]]-sumv[l[i]-1]);
    }
    return sum;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>m>>s;
    for(int i=1;i<=n;i++){
        cin>>w[i]>>v[i];
        R=max(R,w[i]);
    }
    for(int i=1;i<=m;i++){
        cin>>l[i]>>r[i];
    }
    while(L<=R){
        W=(L+R)>>1;
        y=check(W);
        ans=min(ans,abs(s-y));
        if(y<s)
            R=W-1;
        else
            L=W+1;
    }
    cout<<ans<<endl;
    return 0;
}