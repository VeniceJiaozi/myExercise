#include<bits/stdc++.h>
using namespace std;
const int MAXN=1e5+5;
int a[MAXN];
long long sum[MAXN];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    cin>>a[0];
    sum[0]=(long long)a[0];
    for(int i=1;i<n;i++){
        cin>>a[i];
        sum[i]=sum[i-1]+(long long)a[i];
    }
    int m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int l,r;
        cin>>l>>r;
        if(l==1)cout<<sum[r-1]<<endl;
        else cout<<sum[r-1]-sum[l-2]<<endl;
    }
    return 0;
}