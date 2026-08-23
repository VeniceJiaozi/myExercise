#include<bits/stdc++.h>
using namespace std;
const int MAXN=1e6+5;
double v[MAXN],w[MAXN];   
unsigned long long sum_v,sum_w;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>v[i];
        sum_v+=v[i];
    }
    for(int i=0;i<n;i++){
        cin>>w[i];
        sum_w+=w[i];
    }
    double ans=(double)sum_w/(double)sum_v;
    cout<<fixed<<setprecision(6)<<ans<<endl;
    return 0;
}