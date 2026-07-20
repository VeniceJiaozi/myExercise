#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
    return a>b;
}
int main(){
    int n;long long b;
    scanf("%d%lld",&n,&b);
    int a[n];long long s=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++){
        if(s>=b){
            printf("%d",i);
            return 0;
        }
        s+=a[i];
    }
    return 0;
}