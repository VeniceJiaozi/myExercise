#include<bits/stdc++.h>
using namespace std;
struct Node{
    int val;
    char c;
};
const int MAXN=2e5+5;
Node a[MAXN];
int l_pre[MAXN],r_pre[MAXN];//l_per[i]表示i及i左边L的个数,
                            //r_pre[i]表示i及i右边R的个数
int pref[MAXN];//前缀和,pref[i]表示前i个元素的和
void solve(){
    int n;
    cin>>n;
    fill(pref,pref+n+1,0);
    fill(l_pre,l_pre+n+1,0);
    fill(r_pre,r_pre+n+1,0);
    //vector<Node> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i].val;
        pref[i+1]=pref[i]+a[i].val;
    }
    for(int i=0;i<n;i++){
        cin>>a[i].c;
    }
    int cnt_l=0,cnt_r=0;
    //前缀L
    for(int i=0;i<n;i++){
        if(a[i].c=='L')
            cnt_l++;
        l_pre[i]=cnt_l;
    }
    //后缀R
    for(int i=n-1;i>=0;i--){
        if(a[i].c=='R')
            cnt_r++;
        r_pre[i]=cnt_r;
    }
    long long ans=0;
    for(int i=0;i<n;i++){
        int sum=min(l_pre[i],r_pre[i]);
        ans+=1ll*sum*a[i].val;
    }
    cout<<ans<<endl;
    return;
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