#include<bits/stdc++.h>
using namespace std;vector<int> a;
void quicksort(int l,int r)
{
    if(l>=r) return;
    int i,j,mid;
    i=l;
    j=r;
    mid=a[(l+r)/2];
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
    if(l<j)quicksort(l,j);
    if(i<r)quicksort(i,r);
}
int main()
{
    
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        a.push_back(x);
    }
    quicksort(0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}