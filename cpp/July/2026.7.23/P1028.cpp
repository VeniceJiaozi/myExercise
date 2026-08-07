#include<bits/stdc++.h>
using namespace std;
int flag[1005];
long long dg(int k){
    if(k==1)return 1;
    if(flag[k])return flag[k];
    long long sum=1;
    for(int i=1;i<=k/2;i++){
        sum+=dg(i);
    }
    flag[k]=sum;
    return sum;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%lld",dg(n));
    return 0;
}