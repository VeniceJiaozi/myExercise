#include<bits/stdc++.h>
using namespace std;
int n,m,x;
string s;
int main(){
    cin>>n;
    unordered_map<string,vector<int>>mp;
    // for(int i=1;i<=n;i++){
    //     cin>>x;
    //     for(int j=0;j<x;j++){
    //         cin>>s;
    //         mp[s].push_back(i);
    //     }
    // }
    for(int i=1;i<=n;i++){
    scanf("%d",&m);
    set<string> used;  // 记录当前短文已经添加过的单词
    for(int j=0;j<m;j++){
        cin>>s;
        if(used.find(s) == used.end()){  // 本短文第一次出现
            mp[s].push_back(i);
            used.insert(s);
        }
    }
}
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>s;
        if(mp[s].size()==0){
            printf("\n");
            continue;
        }
        //去重
        int cnt=unique(mp[s].begin(),mp[s].end())-mp[s].begin();
        for(int j=0;j<cnt;j++){
            printf("%d ",mp[s][j]);
        }
        printf("\n");
    }
    return 0;
}