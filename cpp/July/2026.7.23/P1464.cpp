#include<bits/stdc++.h>
using namespace std;
long long flag[21][21][21];
long long w(long long a,long long b,long long c){
    if(a<=0||b<=0||c<=0)return 1;
    if(a>20||b>20||c>20)return w(20,20,20);
    if(flag[a][b][c])return flag[a][b][c];
    long long ans=0;
    if(a<b&&b<c){
        flag[a][b][c]+=w(a,b,c-1);
        flag[a][b][c]+=w(a,b-1,c-1);
        flag[a][b][c]-=w(a,b-1,c);
        return flag[a][b][c];
    }
    flag[a][b][c]+=w(a-1,b,c);
    flag[a][b][c]+=w(a-1,b-1,c);
    flag[a][b][c]+=w(a-1,b,c-1);
    flag[a][b][c]-=w(a-1,b-1,c-1);
    return flag[a][b][c];
}
int main(){
    while(1){
        long long a,b,c;
        scanf("%lld%lld%lld",&a,&b,&c);
        if(a==-1&&b==-1&&c==-1)break;
        printf("w(%lld, %lld, %lld) = %lld\n",a,b,c,w(a,b,c));
    }
}