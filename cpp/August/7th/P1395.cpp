#include<bits/stdc++.h>
using namespace std;
int n;
const int MAXN=50005;
const int INF=0x3f3f3f3f;
long long ctd;//current total distance
long long ans=INF;
int ansNode;//ans node
vector<int> neibour[MAXN];//存储每个人的邻居
//接下来找重心
int sz[MAXN];//存储每个节点的子树大小
int minMaxPart=INF;//删掉某点后，最大连通块的最小值

void findCentroid(int node,int father){
    sz[node]=1;//自己算一个结点
    int maxPart=0;//删去node后最大连通块的大小

    for(int i:neibour[node]){
        if(i==father) continue;
        findCentroid(i,node);
        sz[node]+=sz[i];
        maxPart=max(maxPart,sz[i]);
    }
    maxPart=max(maxPart,n-sz[node]);
    if(maxPart<minMaxPart||(maxPart==minMaxPart&&node<ansNode)){
        minMaxPart=maxPart;
        ansNode=node;
    }
}
void dfs(int node,int father,int dis){
    ctd+=dis;
    for(int i:neibour[node]){
        if(i==father) continue;
        dfs(i,node,dis+1);
    }
}
int main(){
    scanf("%d",&n);
    int a,b;
    for(int i=0;i<n-1;i++){
        scanf("%d%d",&a,&b);
        neibour[a].push_back(b);
        neibour[b].push_back(a);
    }
    findCentroid(1,0);
    ctd=0;
    dfs(ansNode,0,0);
    ans=ctd;
    printf("%d %lld\n",ansNode,ans);
    return 0;
}