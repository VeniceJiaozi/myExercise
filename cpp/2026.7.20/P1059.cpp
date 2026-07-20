#include<bits/stdc++.h>
using namespace std;
int a[1000];
void quicksort(int l,int r)
{
    int i=l,j=r;
    int x=a[(l+r)/2];
    do{
        while(a[i]<x) i++;
        while(a[j]>x) j--;
        if(i<=j)
        {
            swap(a[i],a[j]);
            i++;
            j--;
        }
    }while(i<=j);
    if(l<j) quicksort(l,j);
    if(i<r) quicksort(i,r);
    return;
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)   
    {
        scanf("%d",&a[i]);
    }
    quicksort(0,n-1);
    int flag=a[0];int ans=1;
    for(int i=1;i<n;i++)
    {
        if(a[i]!=flag){
            //printf("%d ",a[i]);
            flag=a[i];
            ans++;
        }
    }
    printf("%d\n",ans);
    flag=a[0];ans=1;
    printf("%d ",a[0]);
    for(int i=1;i<n;i++)
    {
        if(a[i]!=flag){
            printf("%d ",a[i]);
            flag=a[i];
            //ans++;
        }
    }
    
    return 0;
}