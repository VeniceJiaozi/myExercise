#include<bits/stdc++.h>
using namespace std;
int n,m;
const int N=1005;
bool init[N];//init[i]=1表示在队列中，0表示不在
int main()
{
    scanf("%d%d",&m,&n);
    int x;
    int num=0,ans=0;//队中元素个数
    queue<int> q;
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        if(init[x]==0){
            ans++;//增加缺页次数
            if(num<m){
                q.push(x);
                init[x]=1;
                num++;
            }
            else{
                int a=q.front();
                init[a]=0;
                q.pop();
                q.push(x);
                init[x]=1;
            }
        }
    }
    printf("%d\n",ans);
    return 0;
}