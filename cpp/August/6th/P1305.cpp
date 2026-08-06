#include<bits/stdc++.h>
using namespace std;
int n;
string input;
int root,lft,rght,ROOT;
int left_child[30],right_child[30];//为零表示该位置没有孩子
void print(int root){
    //if(root==0)return;
    printf("%c",root+'a'-1);
    if(left_child[root]!=0)print(left_child[root]);
    if(right_child[root]!=0)print(right_child[root]);
    return;
}
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        cin>>input;
        root=input[0]-'a'+1;
        if(input[1]!='*')
            lft=input[1]-'a'+1,left_child[root]=lft;
        if(input[2]!='*')
            rght=input[2]-'a'+1,right_child[root]=rght;
        if(i==0)ROOT=root;
    }
    print(ROOT);
    return 0;
}