#include<bits/stdc++.h>
using namespace std;

int n,m;
string s;

int main(){
    scanf("%d",&n);
    unordered_map<string,vector<int>>mp;
    
    for(int i=1;i<=n;i++){
        scanf("%d",&m);
        for(int j=0;j<m;j++){
            cin>>s;
            mp[s].push_back(i);
        }
    }
    
    scanf("%d",&m);
    for(int i=0;i<m;i++){
        cin>>s;
        if(mp[s].size()==0){
            printf("\n");
            continue;
        }
        
        int cnt = unique(mp[s].begin(), mp[s].end()) - mp[s].begin();
        
        // 手工计算真正的去重数量（相邻相同算一个）
        int real = 1;
        for(int k=1; k<mp[s].size(); k++){
            if(mp[s][k] != mp[s][k-1]) real++;
        }
        
        // 如果不一致，输出错误信息
        if(cnt != real){
            printf("ERR word=%s size=%d cnt=%d real=%d\n", s.c_str(), (int)mp[s].size(), cnt, real);
        }
        
        for(int j=0;j<cnt;j++){
            printf("%d ",mp[s][j]);
        }
        printf("\n");
    }
    return 0;
}