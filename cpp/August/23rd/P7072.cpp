#include<bits/stdc++.h>
using namespace std;
const int MAXN=1e5+5;
int a[MAXN];
int main(){
    double n,w;
    cin>>n>>w;
    w/=100;
    double ans=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sort(a,a+i+1);
        reverse(a,a+i+1);
        int curr=floor((i+1)*w);
        int num=max(1,curr);
        //cout<<"第"<<num<<"名"<<endl;
        cout<<a[num-1]<<" ";
        // if(i==n-1){
        //     cout<<endl;
        //     for(int j=0;j<n;j++)
        //         cout<<a[j]<<" ";
        // }
    }
    return 0;
}