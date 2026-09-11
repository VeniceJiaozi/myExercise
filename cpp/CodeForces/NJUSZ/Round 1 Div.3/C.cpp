#include<bits/stdc++.h>
using namespace std;
// long long check(int l,int r){

// }
void solve(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    vector<int> h(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        cin>>h[i];
    
    //滑动窗口
    int l=0;
    long long ans=0;
    long long sum=0;
    for(int r=0;r<n;r++){
        //整除链断裂
        if(r>0&&h[r-1]%h[r]!=0){
            l=r;
            sum=0;
        }

        sum+=a[r];
        while(sum>k&&l<=r){
            sum-=a[l];
            l++;
        }

        if(l<=r){
            ans=max(ans,(long long)(r-l+1));
        }
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