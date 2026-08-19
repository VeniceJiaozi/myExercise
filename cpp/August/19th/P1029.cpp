#include<bits/stdc++.h>
using namespace std;
int ans=0;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int x0,y0;
    cin>>x0>>y0;
    if(x0==y0)ans--;
    int n=x0*y0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            int j=n/i;
            if(__gcd(i,j)==x0)
                ans+=2;
        }
    }
    cout<<ans<<endl;
    return 0;
}