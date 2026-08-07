#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    int ans=0x3f3f3f3f;
    cin>>n>>m;
    int a[n][m+1];
    memset(a,0,sizeof(a));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
            if(a[i][j]>a[i][m])a[i][m]=a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        if(a[i][m]<ans)ans=a[i][m];
    }
    cout<<ans;
    return 0;
}