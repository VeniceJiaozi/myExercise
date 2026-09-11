#include<bits/stdc++.h>
using namespace std;
struct Node{
    long long val;
    int id;
    long long ans=0;
};
/*void solve(){
    int n;
    cin>>n;
    vector<int> x(n);
    for(int i=0;i<n;i++)
        cin>>x[i];
    
    long long ans=0;
    for(int s=0;s<n;s++){
        long long sum=0;
        for(int i=0;i<n;i++){
            sum+=abs(x[s]-x[i]);
        }
        sum+=n;
        cout<<sum<<" ";
    }
    cout<<endl;
}
tle了
*/
bool cmp1(Node a,Node b){
    return a.val<b.val;
}
bool cmp2(Node a,Node b){
    return a.id<b.id;
}
void solve(){
    //排序后用前缀和
    int n;
    cin>>n;
    vector<Node> x(n);
    for(int i=0;i<n;i++){
        cin>>x[i].val;
        x[i].id=i;
    }
    sort(x.begin(),x.end(),cmp1);
    vector<long long> prefix(n+1,0);
    prefix[0]=x[0].val;
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+x[i].val;
    }
    x[0].ans=prefix[n-1]-n*x[0].val+n;
    for(int j=1;j<n;j++){
        x[j].ans=(j*2-n+1)*x[j].val+prefix[n-1]-prefix[j]-prefix[j-1]+n;
    }
    sort(x.begin(),x.end(),cmp2);
    for(int i=0;i<n;i++){
        cout<<x[i].ans<<" ";
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