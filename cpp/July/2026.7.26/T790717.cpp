#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    if(x==y){
        cout<<1<<endl;
        return 0;
    }
    int ans=0;
    for(int i=x;i<=y;i++){
        for(int j=x;j<=y;j++){
            for(int k=x;k<=y;k++){
                for(int l=x;l<=y;l++){
                    if(i*j==k*l)ans++;
                }
            }
        }
    }
    cout<<ans<<endl;
    return 0;
}