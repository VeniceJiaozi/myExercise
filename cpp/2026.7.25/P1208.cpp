#include<bits/stdc++.h>
using namespace std;
struct node
{
    int p,a;//p为价格，a为数量
};
bool cmp(node a,node b)
{
    return a.p<b.p;
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<node> l(m);
    for(int i=0;i<m;i++)
    {
        cin>>l[i].p>>l[i].a;
    }
    sort(l.begin(),l.end(),cmp);
    int cost=0;
    for(int i=0;i<m;i++)
    {
        if(n<=l[i].a)
        {
            cost+=l[i].p*n;
            break;
        }
        else
        {
            cost+=l[i].p*l[i].a;
            n-=l[i].a;
        }
    }
    cout<<cost<<endl;
    return 0;
}