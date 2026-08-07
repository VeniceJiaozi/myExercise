#include<bits/stdc++.h>
using namespace std;
int n;
int a[200];bool pd;
int main()
{
    cin>>n;
    if(n==0){int c;cin>>c;cout<<c;return 0;}
    if(n==1){
        int x,y;cin>>x>>y;
        if(x==1)cout<<"x";
        else if(x==-1)cout<<"-x";
        else if(x!=0)cout<<x<<"x";
        if(y>0)cout<<"+"<<y;
        else if(y<0)cout<<y;
        return 0;
    }
    for(int i=0;i<n+1;i++)cin>>a[i];
    //第一项特殊判断
    if(a[0]==1){cout<<"x^"<<n;pd=1;}
    else if(a[0]==-1){cout<<"-x^"<<n;pd=1;}
    else if(a[0]!=0){cout<<a[0]<<"x^"<<n;pd=1;}
    //从第二项开始判断
    for(int i=1;i<n-1;i++){
        if(a[i]==0)continue;
        if(a[i]==1){cout<<"+x^"<<n-i;pd=1;}
        else if(a[i]==-1){cout<<"-x^"<<n-i;pd=1;}
        else if(a[i]>0){cout<<"+"<<a[i]<<"x^"<<n-i;pd=1;}
        else if(a[i]<0){cout<<a[i]<<"x^"<<n-i;pd=1;}
    }
    //倒数第二项特殊判断
    if(a[n-1]==1){cout<<"+x";pd=1;}
    else if(a[n-1]==-1){cout<<"-x";pd=1;}
    else if(a[n-1]>0){cout<<"+"<<a[n-1]<<"x";pd=1;}
    else if(a[n-1]<0){cout<<a[n-1]<<"x";pd=1;}
    //最后一项特殊判断
    if(a[n]>0){cout<<"+"<<a[n];pd=1;}
    else if(a[n]<0){cout<<a[n];pd=1;}
    if(!pd)cout<<"0";
    return 0;
}