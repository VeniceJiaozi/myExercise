#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;

    map<long long,long long> cnt;
    long long val;
    for(int i=0;i<n;i++){
        cin>>val;
        cnt[val]++;
    }
    
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        long long x,y;
        cin>>x>>y;

        long long delta;
        delta=x*x-4*y;

        //判断delta大于零，方程有根
        if(delta<0){
            cout<<0<<" ";
            continue;
        }

        //判断delta是否为完全平方数
        long long sqrt_delta=(long long)round(sqrt((double)delta));
        if(sqrt_delta*sqrt_delta!=delta){
            cout<<0<<" ";
            continue;
        }

        //判断能否被二整除
        if((x+sqrt_delta)%2!=0||(x-sqrt_delta)%2!=0){
            cout<<0<<" ";
            continue;
        }

        long long root1=(x+sqrt_delta)/2;
        long long root2=(x-sqrt_delta)/2;
        if(root1==root2){
            cout<<cnt[root1]*(cnt[root1]-1)/2<<" ";
        } else {
            cout<<cnt[root1]*cnt[root2]<<" ";
        }
    }
    cout<<endl;
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