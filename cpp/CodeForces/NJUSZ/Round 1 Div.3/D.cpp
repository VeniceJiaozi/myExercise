#include<bits/stdc++.h>
using namespace std;
const int MAXN=2e5+5;
int l[MAXN],r[MAXN];
bool check(long long k,const vector<pair<long long,long long>>& segs){
    //初始可达区间是0
    long long cur_l=0,cur_r=0;

    for(const auto& seg:segs){
        long long l=seg.first,r=seg.second;
        long long new_l=cur_l-k,new_r=cur_r+k;//更新可达区间

        new_l=max(new_l,l);
        new_r=min(new_r,r);//取交集

        if(new_l>new_r)
            return false;
        
        cur_l=new_l;
        cur_r=new_r;
    }
    return true;
}
void solve(){
    int n;
    cin>>n;

    vector<pair<long long,long long>> segs(n);//记录每个区间的左右端点
    for(int i=0;i<n;i++)
        cin>>segs[i].first>>segs[i].second;
    
    //二分
    long long l=0,h=1e9;//low,high

    while(l<h){
        long long mid=l+(h-l)/2;
        if(check(mid,segs))
            h=mid;
        else
            l=mid+1;
    }
    cout<<l<<endl;
}
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        solve();
    }
}