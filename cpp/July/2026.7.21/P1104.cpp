#include<bits/stdc++.h>
using namespace std;
struct person{
    int id,y,m,d;
    string name;
}p[105];
bool cmp(person a,person b){
    if(a.y!=b.y) return a.y<b.y;
    if(a.m!=b.m) return a.m<b.m;
    if(a.d!=b.d) return a.d<b.d;
    return a.id>b.id;
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        cin>>p[i].name>>p[i].y>>p[i].m>>p[i].d;
        p[i].id=i+1;
    }
    sort(p,p+n,cmp);
    for(int i=0;i<n;i++){
        cout<<p[i].name<<endl;
    }
    return 0;
}