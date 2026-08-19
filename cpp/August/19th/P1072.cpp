#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        int a0,a1,b0,b1;
        cin>>a0>>a1>>b0>>b1;
        int p=a0/a1,q=b1/b0,ans=0;
        for(int i=1;i*i<=b1;i++){
            if(b1%i==0){
                if(i%a1==0&&__gcd(i/a1,p)==1&&__gcd(q,b1/i)==1){
                    ans++;
                }
                int j=b1/i;
                if(i==j) continue;
                if(j%a1==0&&__gcd(j/a1,p)==1&&__gcd(q,b1/j)==1){
                    ans++;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}