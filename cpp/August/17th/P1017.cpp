#include<bits/stdc++.h>
using namespace std;
void zhuan(int n,int r){
    if(n==0)return;
    int yu=n%r;
    if(yu<0)yu-=r,n+=r;
    if(yu>=10)yu=yu-10+'A';
    else yu+='0';
    zhuan(n/r,r);
    printf("%c",yu);
    return;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,r;
    cin>>n>>r;
    cout<<n<<"=";
    zhuan(n,r);
    printf("(base%d)",r);
    return 0;
}