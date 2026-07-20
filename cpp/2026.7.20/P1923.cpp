#include<bits/stdc++.h>
using namespace std;
int n,k,x;
vector<int> a;
void quicksort(int l,int r){
    int i=l,j=r;
    int mid=a[(l+r)/2];
    do{
        while(a[i]<mid) i++;
        while(a[j]>mid) j--;
        if(i<=j)
        {
            swap(a[i],a[j]);
            i++;
            j--;
        }
    }while(i<=j);
    if(l<j) quicksort(l,j);
    if(i<r) quicksort(i,r);
}
int main()
{
    //cin>>n>>k;
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;i++)
    {
        //cin>>x;
        scanf("%d",&x);
        a.push_back(x);
    }
    quicksort(0,n-1);
    printf("%d",a[k]);
    //cout<<a[k];
    // int flag=a[0];
    // for(int i=0;i<n;i++){
    //     if(flag<a[i]){
    //         flag=a[i];
    //         k--;
    //     }
    //     if(k==0){
    //         cout<<a[i];
    //         return 0;
    //     }
    // }
    return 0;
}