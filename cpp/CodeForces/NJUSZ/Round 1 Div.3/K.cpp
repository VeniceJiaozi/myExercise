//先将数组排序，从i=a[0],j=a[n-1]开始，j从后往前遍历，当a[i]+a[j]<x时剪枝
#include<bits/stdc++.h>
using namespace std;
const int MAXN=2e5+5;
//long long a[MAXN];
int n;
map<long long,long long> cnt;
void Solve(){
    long long ans=0;
    long long x,y;
    cin>>x>>y;
    long long delta=x*x-4*y;
    if(delta<0){
        cout<<0<<" ";
        return;
    }

    long long s=(long long)round(sqrt((double)delta));
    long long root1=-1,root2=-1;//两个根
    bool flag=false;
    for(long long ss=max(0LL,s-2);ss<=s+2;ss++){
        if(ss*ss==delta){
            if((x+ss)%2==0&&(x-ss)%2==0){
                root1=(x+ss)/2;
                root2=(x-ss)/2;
                flag=true;
            }
            break;
        }
    }
    if(!flag){
        cout<<0<<" ";
        return;
    }

    if(root1==root2){
        long long c=cnt[root1];
        cout<<c*(c-1)/2<<" ";
    }else{
        cout<<cnt[root1]*cnt[root2]<<" ";
    }
}
void solve(){
    
    cnt.clear();
    cin>>n;
    for(int i=0;i<n;i++){
        long long v;
        cin>>v;
        cnt[v]++;
    }
        
    //sort(a,a+n);

    int q;
    cin>>q;
    while(q--){
        Solve();
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