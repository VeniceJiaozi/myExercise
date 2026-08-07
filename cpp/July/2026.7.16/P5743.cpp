#include<bits/stdc++.h>
using namespace std;
int ans=0,n;
void digui(int x){
    //递归出口为n=0
    if(n==1) return;
    //每次递归，ans+=x，n-=1
    ans=x*2+2;
    n-=1;
    digui(ans);
}
int main(){
    cin>>n;
    digui(1);
    cout<<ans;
    return 0;
}