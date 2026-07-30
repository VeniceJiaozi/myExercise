#include<bits/stdc++.h>
using namespace std;
int n,m;
int main()
{
    scanf("%d%d",&n,&m);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<m;i++){
        int x;
        scanf("%d",&x);
        printf("%d\n",a[x-1]);
    }
    return 0;
}