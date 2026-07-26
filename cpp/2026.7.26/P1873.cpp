#include<bits/stdc++.h>
using namespace std;
long long cut(int x,int a[],int n)//在高度为x处砍伐树木
{
    long long ans1=0;
    for(int i=0;i<n;i++){
        if(a[i]>x)ans1+=a[i]-x;
    }
    return ans1;
}
int main()
{
    int n;long long m;
    scanf("%d%lld",&n,&m);
    int a[n],ans=0,up=0,down=0,mid=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]>up)up=a[i];
    }
    //二分查找
    
    while(up>=down){
        mid=(up+down)/2;
        if(cut(mid,a,n)>=m){
            ans=mid;
            down=mid+1;
            //mid=(up+down)/2;
        }
        else{
            up=mid-1;
            //mid=(up+down)/2;
        }
    }
    printf("%d",ans);
    return 0;
}