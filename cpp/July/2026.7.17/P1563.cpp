#include<bits/stdc++.h>
using namespace std;
//记录小人的朝向和职业
struct node{
    bool side;
    string carrer;
};
//记录指令
struct node1{
    bool dire;
    int num;
};
node l[100005];
node1 order[100005];
int i;int pos;
int main()
{
    int n,m;
    cin>>n>>m;
    for(i=0;i<n;i++){
        cin>>l[i].side>>l[i].carrer;
    }
    for(i=0;i<m;i++){
        cin>>order[i].dire>>order[i].num;
    }
    for(i=0;i<m;i++){
        //顺时针
        if(l[pos].side==order[i].dire){
            pos=(pos-order[i].num+n*10000000001)%n;
        }
        //逆时针
        else{
            pos=(pos+order[i].num)%n;
        }
    }
    cout<<l[pos].carrer<<endl;
    return 0;
}