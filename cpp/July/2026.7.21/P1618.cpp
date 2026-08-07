#include<bits/stdc++.h>
using namespace std;
int num[9]={1,2,3,4,5,6,7,8,9};
bool flag=0;
int main()
{
    float a,b,c;
    scanf("%f%f%f",&a,&b,&c);
    do{
        int x=num[0]*100+num[1]*10+num[2];
        int y=num[3]*100+num[4]*10+num[5];
        int z=num[6]*100+num[7]*10+num[8];
        if(x*b==a*y&&x*c==a*z)
        {
            printf("%d %d %d\n",x,y,z);
            flag=1;
        }
    }while(next_permutation(num,num+9));
    if(!flag)printf("No!!!");
    return 0;
}