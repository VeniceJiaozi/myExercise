#include<bits/stdc++.h>
using namespace std;
double w0,w;
int m;
void erfen(double l,double r){
    double mid=(l+r)/2;
    double a=w0;//t个月后还有a元没还
    if(r-l<0.0001){
        printf("%.1lf",mid*100);
        return ;
    }
    for(int i=1;i<=m;i++)
        a=a*(1+mid)-w;
    if(a>0) erfen(l,mid);
    if(a<0) erfen(mid,r);
    if(a==0){
        printf("%.1lf",mid*100);
        return;
    }
}
int main()
{
    scanf("%lf%lf%d",&w0,&w,&m);
    double ans=0;double l=0,r=3;
    erfen(0,5);
    return 0;
}