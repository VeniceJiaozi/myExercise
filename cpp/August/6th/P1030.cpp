#include<bits/stdc++.h>
using namespace std;
string s1,s2;//中序，后序
void dfs(string s1,string s2,int n){
    if(n==0){
        return;
    }
    printf("%c",s2[n-1]);//输出根结点
    //查找划分左右子树
    char c=s2[n-1];
    int pos=s1.find(c);
    if(pos!=0){//左子树存在
        string l1=s1.substr(0,pos);
        string l2=s2.substr(0,pos);
        dfs(l1,l2,pos);
    }
    if(pos!=n-1){//右子树存在
        string r1=s1.substr(pos+1,n-pos-1);
        string r2=s2.substr(pos,n-pos-1);
        dfs(r1,r2,n-pos-1);
    }
}
int main(){
    cin>>s1>>s2;
    int n=s1.size();
    dfs(s1,s2,n);
    return 0;
}