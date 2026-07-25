#include<bits/stdc++.h>
using namespace std;
void search(int arr[],int n,int x){
    int l=0,r=n-1;int ans=-2;
    while(l<=r){
        int mid=(l+r)/2;
        if(arr[mid]>=x){
            if(arr[mid]==x){
                ans=mid;
            }
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    printf("%d ",ans+1);
    return;
}
int main(){
    int n,m;scanf("%d%d",&n,&m);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int x;
    for(int i=0;i<m;i++){
        scanf("%d",&x);
        search(arr,n,x);
    }
    return 0;
}