#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    int ans=0;
    cin>>n>>t;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==t){
            ans+=2;
        }
        else if(abs(a[i]-t)<=2){
            ans+=1;
        }
    }
    cout<<ans<<endl;
    return 0;
}