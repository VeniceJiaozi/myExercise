#include<bits/stdc++.h>
using namespace std;
const int MAXN=5e6+5;
int n,p;
long long d[MAXN];//差分数组
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>p;
    //输入
    long long prev=0,curr;
    for(int i=0;i<n;i++){
        cin>>curr;
        d[i]=curr-prev;
        prev=curr;
    }
    //差分
    for(int i=0;i<p;i++){
        long long l,r,z;
        cin>>l>>r>>z;
        d[l]+=z;
        d[r+1]-=z;
    }
    //查询
    long long sum=0;
    long long min_val=1e18;
    for(int i=0;i<n;i++){
        sum+=d[i];//sum即还原后的值
        min_val=min(min_val,sum);
    }
    cout<<min_val<<endl;
    return 0;
}