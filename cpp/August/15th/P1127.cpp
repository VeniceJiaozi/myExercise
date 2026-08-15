#include<bits/stdc++.h>
using namespace std;
int n;
string word[1005];
int in_deg[26],out_deg[26];
vector<int> adj[26];//邻接表，adj[i]表示以i为起点的边
bool has_letter[26];//表示该字母是否出现过
vector<int> path;//倒序记录走过的路径
int head_ptr[26];
//hierholzer算法
void dfs(int u){
    while(head_ptr[u]<adj[u].size()){
        int edge_idx=adj[u][head_ptr[u]];
        head_ptr[u]++;
        int v=word[edge_idx].back()-'a';
        dfs(v);
        path.push_back(edge_idx);
    }
}
//检查连通性
void check_conn(int u,bool vis[]){
    vis[u]=true;
    for(int i=0;i<adj[u].size();i++){
        int v=word[adj[u][i]].back()-'a';
        if(!vis[v]){
            check_conn(v,vis);
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    if(!(cin>>n)) return 0;
    for(int i=0;i<n;i++){
        cin>>word[i];
    }
    sort(word,word+n);
    //建图+算度数
    for(int i=0;i<n;i++){
        int start=word[i][0]-'a';
        int end=word[i].back()-'a';
        adj[start].push_back(i);
        in_deg[end]++;
        out_deg[start]++;
        has_letter[start]=has_letter[end]=true;
    }
    //找起点终点
    int start_node=-1;//默认没有起点
    int start_count=0;//out_deg-in_deg=1
    int end_count=0;//in_deg-out_deg=1
    for(int i=0;i<26;i++){
        int diff=out_deg[i]-in_deg[i];
        if(diff==1){
            start_count++;
            start_node=i;
        }
        else if(diff==-1){
            end_count++;
        }
        else if(diff!=0){
            cout<<"***"<<endl;
            return 0;
        }
    }
    //检查起点终点数量是否合法
    if(start_count==0&&end_count==0){
        //情况A，欧拉回路，随便找个字母当起点
        for(int i=0;i<26;i++){
            if(has_letter[i]){
                start_node=i;
                break;
            }
        }
    }
    else if(start_count==1&&end_count==1){
        //情况B，欧拉路径，起点已经赋值
    }
    else{
        cout<<"***"<<endl;
        return 0;
    }
    //检查连通性
    bool vis[26]={false};
    check_conn(start_node,vis);
    for(int i=0;i<26;i++){
        if(has_letter[i]&&!vis[i]){
            cout<<"***"<<endl;
            return 0;
        }
    }
    //hierholzer算法
    dfs(start_node);
    //检查是否都走完了
    if(path.size()!=n){
        cout<<"***"<<endl;
        return 0;
    }
    //输出
    for(int i=path.size()-1;i>=0;i--){
        cout<<word[path[i]];
        if(i>0) cout<<".";
    }
    return 0;
}