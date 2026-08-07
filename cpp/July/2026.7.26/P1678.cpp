#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    //先将学校录取分数线a排序，然后对每一个学生b进行二分查找
    scanf("%d%d",&m,&n);
    int a[m+1],b[n];a[0]=0;
    for(int i=1;i<=m;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%d",&b[i]);
    }
    sort(a,a+m+1);
    long long ans=0;
    for(int i=0;i<n;i++){
        int l=1,r=m;//二分查找
        //找到最后一个aj<=bi，使得aj+1>bi，两边比较取较小值
        while(l<=r){
            int mid=(l+r)/2;
            if(a[mid]<=b[i]){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        if(r==0){
            ans+=a[1]-b[i];
        }
        else if(r==m){
            ans+=b[i]-a[m];
        }
        else{
            if(a[r+1]-b[i]>b[i]-a[r]){
                ans+=b[i]-a[r];
            }
            else{
                ans+=a[r+1]-b[i];
            }
        }
    }
    printf("%lld",ans);
    return 0;
}