#include<bits/stdc++.h>
using namespace std;
int n;
int main(){
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    sort(a,a+n);
    long long ans=1;
    for(int i=0;i<n;i++){
        int x=a[i]-i;
        if(x<=0){
            printf("0\n");
            return 0;
        }
        ans*=x;
        ans=ans%((long long)1e9+7);
    }
    printf("%lld\n",ans);
    return 0;
}