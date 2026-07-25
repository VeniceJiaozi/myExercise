#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,ans=0;
    scanf("%lld",&n);
    int h[n+1];h[0]=0;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&h[i]);
    }
    sort(h,h+n+1);
    int l=0,r=n;
    bool flag=0;//flag=0表示左指针向右移动，flag=1表示右指针向左移动
    while(l<r)
    {
        ans+=(h[r]-h[l])*(h[r]-h[l]);
        if(flag==0)
        {
            l++;
            flag=1;
        }
        else
        {
            r--;
            flag=0;
        }
    }
    printf("%lld\n",ans);
    return 0;
}