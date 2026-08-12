#include<bits/stdc++.h>
using namespace std;
const int MAXN=5e4+10;
unordered_map<string,int>mp;//将名字映射成数字下标
string name[MAXN];
int fa[MAXN];
int find(int x){
    return fa[x]==x?x:fa[x]=find(fa[x]);
}
void merge(int x,int y){
    int fx=find(x),fy=find(y);
    if(fx!=fy)
        fa[fy]=fx;
    return;
}
int main()
{
    string s,father,son;
    int cnt=0;//记录有多少个成员
    //初始化并查集
    for(int i=0;i<MAXN;i++)
        fa[i]=i;
    while(1){
        cin>>s;
        if(s=="$")
            return 0;
        if(s[0]=='#'){
            father=s.substr(1);
            if(mp.find(father)==mp.end()){
                mp[father]=cnt;
                name[cnt]=father;
                cnt++;
            }
            
        }
        if(s[0]=='+'){
            son=s.substr(1);
            if(mp.find(son)==mp.end()){
                mp[son]=cnt;
                name[cnt]=son;
                cnt++;
            }
            int fa_id=mp[father],son_id=mp[son];
            merge(fa_id,son_id);
        }
        if(s[0]=='?'){
            string ss=s.substr(1);
            cout<<ss<<" "<<name[find(mp[ss])]<<endl;
        }
    }
    return 0;
}