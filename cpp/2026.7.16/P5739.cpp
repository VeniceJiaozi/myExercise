#include<bits/stdc++.h>
using namespace std;
int ans=1;
void jiecheng(int n){
    if(n==1){
        return;
    }
    else{
        ans*=n;
        jiecheng(n-1);
    }
}
int main(){
    int n;
    cin>>n;
    jiecheng(n);
    cout<<ans;
    return 0;
}