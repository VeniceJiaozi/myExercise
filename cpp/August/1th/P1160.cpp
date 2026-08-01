
#include<bits/stdc++.h>
using namespace std;
const int MAXN = 1e5 + 10;
list<int> lst;
list<int>::iterator pos[MAXN];
bool removed[MAXN]; // 标记是否被删除
int n,m;
int main(){
    scanf("%d",&n);
    lst.push_back(1);
    pos[1] = lst.begin();
    for(int i=2;i<=n;i++){
        int k,p;
        scanf("%d%d",&k,&p);
        list<int>::iterator it;
        if(p==0){
            it=lst.insert(pos[k],i);
        }
        else{
            list<int>::iterator nxt=pos[k];
            ++nxt;
            it=lst.insert(nxt,i);
        }
        pos[i]=it;
    }
    scanf("%d",&m);
    while(m--){
        int x;
        scanf("%d",&x);
        if(!removed[x]){
            lst.erase(pos[x]);
            removed[x]=true;
        }
    }
    for(list<int>::iterator it=lst.begin();it!=lst.end();++it){
        printf("%d ",*it);
    }
    return 0;
}