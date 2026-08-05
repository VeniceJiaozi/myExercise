#include<bits/stdc++.h>
using namespace std;
string s1,s2,s3;//中序，前序，后序
// struct node{
//     char c;
//     int l,r;
// }tree[30];//树节点
void func(string x1,string x2){
    char c=x2[0];//根节点
    if(x1.size()==1){//叶子节点
        printf("%c",c);
        return;
    }
    int pos=x1.find(c);//根节点在中序中的位置
    if(pos!=0){//左子树
        string l1=x1.substr(0,pos);//左子树中序
        string l2=x2.substr(1,pos);//左子树前序
        func(l1,l2);
    }
    if(pos!=x1.size()-1){//右子树
        string r1=x1.substr(pos+1);//右子树中序
        string r2=x2.substr(pos+1);//右子树前序
        func(r1,r2);
    }
    printf("%c",c);//根节点
}
int main(){
    cin>>s1>>s2;
    //tree[0].c=s2[0];//根节点
    func(s1,s2);
    return 0;
}