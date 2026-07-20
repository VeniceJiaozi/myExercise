#include<bits/stdc++.h>
using namespace std;
int a[1000];int n,m,x;
int main()
{
    cin>>n>>m;
    for(int i=0;i<m;i++)
    {
        cin>>x;
        a[x]++;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<a[i];j++)
        {
            cout<<i<<" ";
        }
    }
    return 0;
}