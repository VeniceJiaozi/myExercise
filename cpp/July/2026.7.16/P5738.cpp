#include<bits/stdc++.h>
using namespace std;
int l[101][21];float tol[101],ans;
int minn,maxn,n,m,i,j;
int main(){
    cin>>n>>m;
    for(i=0;i<n;i++){
        maxn=0;minn=0x3f;
        for(j=0;j<m;j++){
            cin>>l[i][j];
            tol[i]+=l[i][j];
            if(l[i][j]>maxn)maxn=l[i][j];
            if(l[i][j]<minn)minn=l[i][j];
        }
        tol[i]-=maxn;tol[i]-=minn;tol[i]/=(m-2.0);
        if(tol[i]>ans)ans=tol[i];
    }
    printf("%.2f",ans);
    return 0;
}