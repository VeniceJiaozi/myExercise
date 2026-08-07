#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int i=n,j=m;
    long long anss=0,ansr=0;
    while(i>0&&j>0){
        anss+=i*j;
        i--;
        j--;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            ansr+=i*j;
        }
    }
    ansr-=anss;
    printf("%lld %lld",anss,ansr);
    return 0;
}