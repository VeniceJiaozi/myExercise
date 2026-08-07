#include<bits/stdc++.h>
using namespace std;
const int MAXN=105;
bool flag[MAXN];
int main()
{
    int n,m;
    cin>>n>>m;
    int sum=0,index=0;int x=n;
    while(1){
        if(!flag[index])sum++;
        if(sum==m){
            printf("%d ",index+1);
            flag[index]=1;
            n--;
            sum=0;
        }
        if(!n)break;
        index++;
        index%=x;
    }
    return 0;
}