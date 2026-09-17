#include<bits/stdc++.h>
using namespace std;
const int MAXN=2e5+5;
long long pref[MAXN], diff[MAXN], cnt[MAXN];

void solve(){
    int n;
    cin>>n;

    fill(pref,pref+n,0);
    fill(diff,diff+n,0);
    fill(cnt,cnt+n+1,0);

    for(int i=0;i<n-1;i++)
        cin>>pref[i];

    diff[0]=pref[0];
    for(int i=1;i<n-1;i++)
        diff[i]=pref[i]-pref[i-1];

    long long s=1LL*n*(n+1)/2; // 只改了这一个防溢出

    if(s==pref[n-2]){
        vector<long long> waiting;
        vector<long long> losing;
        for(int i=0;i<n-1;i++){
            if(diff[i]<=0){ // 只加了这一个防御检查
                cout<<"NO"<<endl;
                return;
            }
            if(diff[i]<=n){
                cnt[diff[i]]++;
                if(cnt[diff[i]]>2){ // 【恢复你原来的 >2】
                    cout<<"NO"<<endl;
                    return;
                }
            }
            else
                waiting.push_back(diff[i]);
        }
        int flag=0;
        for(int i=1;i<=n;i++){
            if(!cnt[i]){
                flag++;
                losing.push_back(i);
            }
        }
        if(flag!=2){
            cout<<"NO"<<endl;
            return;
        }
        long long losing_sum=losing[0]+losing[1];
        if(losing_sum<=n){
            if(!waiting.empty()||cnt[losing_sum]>2){ // 【恢复你原来的 >2】
                cout<<"NO"<<endl;
                return;
            }
            for(int i=1;i<=n;i++){
                if(i!=losing_sum&&cnt[i]>1){
                    cout<<"NO"<<endl;
                    return;
                }
            }
        }else{
            if(waiting.size()!=1||waiting[0]!=losing_sum){
                cout<<"NO"<<endl;
                return;
            }
        }
        cout<<"YES"<<endl;
        return;
    }
    else{
        long long x=s-pref[n-2];
        if(x<=0||x>n){
            cout<<"NO"<<endl;
            return;
        }
        // 【恢复你原来的 n-2】
        for(int i=0;i<n-2;i++){
            if(diff[i]<=0||diff[i]>n){
                cout<<"NO"<<endl;
                return;
            }
            cnt[diff[i]]++;
            if(cnt[diff[i]]>1){
                cout<<"NO"<<endl;
                return;
            }
        }
        vector<long long> missing;
        for(int i=1;i<=n;i++){
            if(!cnt[i])missing.push_back(i);
        }
        // 【恢复你原来的 missing.size()!=2】
        if(missing.size()!=2){
            cout<<"NO"<<endl;
            return;
        }
        bool flag=(missing[0]==x||missing[1]==x);
        if(!flag){
            cout<<"NO"<<endl;
            return;
        }
        cout<<"YES"<<endl;
        return;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}