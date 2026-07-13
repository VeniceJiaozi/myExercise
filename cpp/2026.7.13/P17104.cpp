#include<iostream>
using namespace std;
int n,p2x=2,ans=0;
int main(){
    cin>>n;
    for(;p2x<n;p2x*=2){
        for(int y=1;p2x+y*y<=n;y++){
            ans++;
        }
    }
    cout<<ans;
    return 0;
}
