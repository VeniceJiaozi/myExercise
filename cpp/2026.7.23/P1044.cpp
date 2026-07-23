#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    int h[n+1];
    memset(h,0,sizeof(h));
    h[0]=1;h[1]=1;h[2]=2;;h[3]=5;
    for(int i=4;i<=n;i++){
        for(int j=1;j<=i;j++){
            h[i]+=h[j-1]*h[i-j];
        }
    }
    printf("%d",h[n]);
    return 0;
}