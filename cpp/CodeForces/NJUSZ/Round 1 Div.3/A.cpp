#include<bits/stdc++.h>
using namespace std;
int t,n,u,v,q;
const int MAXN=2e5+5;
long long x,y;
long long leaf[MAXN];//记录每个点的叶子节点数
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin>>t;
    while(t--){
        cin>>n;
        vector<vector<int>> adj(n+5);
        //memset(memo,0,sizeof(memo));
        for(int i=0;i<n;i++){
            //初始化
            adj[i].clear();
            leaf[i]=0;
        }
        for(int i=0;i<n-1;i++){
            //先建无向图
            cin>>u>>v;
            u--,v--;//0-indexed
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<int> order,parent(n,-1);//记录遍历顺序和父节点,-1表示没有父亲
        order.reserve(n);//用vector模拟queue

        //正序遍历，建立有向树
        order.push_back(0);//以0为根节点
        parent[0]=-1;

        for(int i=0;i<(int)order.size();i++){
            int cur=order[i];
            for(int nb:adj[cur]){
                //遍历cur的邻居，nb for neighbour
                if(nb!=parent[cur]){
                    parent[nb]=cur;
                    order.push_back(nb);
                }
            }
        }

        //逆序遍历，计算每个节点的叶子节点数
        for(int i=(int)order.size()-1;i>=0;i--){
            int cur=order[i];
            bool isLeaf=true;//假设cur是叶子节点
            for(int nb:adj[cur]){
                if(nb!=parent[cur]){
                    isLeaf=false;
                    leaf[cur]+=leaf[nb];
                }
            }
            if(isLeaf) leaf[cur]=1;
        }

        cin>>q;
        for(int i=0;i<q;i++){
            cin>>x>>y;
            x--,y--;//0-indexed
            cout<<leaf[x]*leaf[y]<<endl;
        }
    }
    return 0;
}