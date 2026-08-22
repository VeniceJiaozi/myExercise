#include<bits/stdc++.h>
using namespace std;
int n;
const int MAXN=20001;
long long ans;
long long a[MAXN],b[MAXN];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    sort(a,a+n);
    sort(b,b+n);
    for(int i=0;i<n;i++){
        ans+=b[i]-a[i];
        if(i+1<n){
            if(b[i]>a[i+1]){
                ans-=b[i]-a[i+1];
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}