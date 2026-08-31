#include<bits/stdc++.h>
using namespace std;
int n,m;
const int MAXN=26;
int inDegree[MAXN];//入度数组
int temp[MAXN];//每次调用topologicalSort时，inDegree的副本
bool flag;//标记是否已经得出结论
bool graph[MAXN][MAXN];//邻接矩阵
int topologicalSort(string &result){
    //建立副本
    memcpy(temp,inDegree,sizeof(int)*n);
    queue<int> q;
    result.clear();
    bool unique=true;//假设序列唯一
    //入列
    for(int i=0;i<n;i++){
        if(temp[i]==0){
            q.push(i);
        }
    }
    while(!q.empty()){
        if(q.size()>1){
            unique=false;//不唯一
        }
        int u=q.front();
        q.pop();
        result+=char(u+'A');
        //更新入度
        for(int v=0;v<n;v++){
            if(graph[u][v]){
                temp[v]--;
                if(temp[v]==0){
                    q.push(v);
                }
            }
        }
        
    }
    if((int)result.size()<n){
            return 2;
    }
    if(!unique){
        return 0;
    }
    return 1;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n>>m;
    for(int k=1;k<=m;k++){
        string s;
        cin>>s;
        int u=s[0]-'A',v=s[2]-'A';
        if(!graph[u][v]){
            inDegree[v]++;
            graph[u][v]=true;
        }
        string seq;
        int status=topologicalSort(seq);
        if(status==2&&!flag){
            cout<<"Inconsistency found after "<<k<<" relations.";
            flag=true;
        }
        else if(status==1&&!flag){
            cout<<"Sorted sequence determined after "<<k<<" relations: "<<seq<<".";
            flag=true;
            //return 0;
        }

    }
    if(!flag){
        cout<<"Sorted sequence cannot be determined.";
    }
    return 0;
}