#include<bits/stdc++.h>
using namespace std;
int n,i,k,maxn=0,j;int a[101];bool pd[100001];
void shai(){
    k=2;
    while(k<=pow(maxn,0.5)){
        for(j=4;j<=maxn;j++){
            if(pd[j])continue;
            if(j!=k&&j%k==0)pd[j]=1;
        }
        k++;
    }
    return;
}
int main(){
    pd[0]=1;pd[1]=1;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
        if(a[i]>maxn)maxn=a[i];
    }
    shai();
    for(i=0;i<n;i++){
        if(!pd[a[i]])cout<<a[i]<<" ";
    }
    return 0;
}