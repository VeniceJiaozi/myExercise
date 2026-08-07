#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b,c,d;
    scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
    int num=0;
    for(double i=-100;i<=100;i+=0.001){
        double x=i,y=i+0.001;
        if((a*x*x*x+b*x*x+c*x+d)*(a*y*y*y+b*y*y+c*y+d)<=0){
            printf("%.2lf ",x);
            num++;
        }
        if(num==3)break;
    }
    return 0;
}