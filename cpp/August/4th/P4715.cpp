#include<bits/stdc++.h>
using namespace std;
struct node
{
    int id,val;
}country[300];
int main()
{
    int n;
    scanf("%d",&n);
    int num=(int)pow(2,n);
    for(int i=num;i<num*2;i++){
        scanf("%d",&country[i].val);
        country[i].id=i-num+1;
    }
    int level=n;//层数
    while(level>0){
        level--;
        num=(int)pow(2,level);
        for(int i=num;i<num*2;i++)
        {
            if(country[i*2].val>country[i*2+1].val){
                country[i].val=country[i*2].val;
                country[i].id=country[i*2].id;
            }
            else{
                country[i].val=country[i*2+1].val;
                country[i].id=country[i*2+1].id;
            }
        }
    }
    if(country[2].val>country[3].val)
        printf("%d",country[3].id);
    else
        printf("%d",country[2].id);
    return 0;
}