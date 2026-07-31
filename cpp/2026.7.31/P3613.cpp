#include<bits/stdc++.h>
using namespace std;
int n,q;
int main()
{
    scanf("%d%d",&n,&q);
    map<long long,int>s;
    s[0]=1;
    int a,b,c;
    for(int i=0;i<q;i++)
    {
        int a,b,c,d;
        scanf("%d%d%d",&a,&b,&c);
        if(a==1){
            scanf("%d",&d);
            s[b*100000+c]=d;
        }
        if(a==2)
            printf("%d\n",s[b*100000+c]);
    }
    return 0;
}