#include<bits/stdc++.h>
using namespace std;
int n,w,x,a[605];
int main(){
    cin>>n>>w;
    for(int i=1;i<=n;i++){
        cin>>x;
        a[x]++;
        int p=max(1,i*w/100);
        int num=0;
        for(int j=600;j>=0;j--){
            num+=a[j];
            if(num>=p){
                cout<<j<<" ";
                break;
            }
        }
    }
    return 0;
}