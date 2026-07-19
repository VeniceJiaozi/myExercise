#include<bits/stdc++.h>
using namespace std;
struct node{
    string name,zhiwei;
    int gongxian,dengji,id;
}person[2000];
bool cmp1(const node& a,const node& b){
    if(a.gongxian!=b.gongxian)return a.gongxian>b.gongxian;
    return a.id<b.id;
}
bool cmp(const node& a,const node& b){
    if(a.dengji!=b.dengji)return a.dengji>b.dengji;
    return a.id<b.id;
}
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>person[i].name>>person[i].zhiwei>>person[i].gongxian>>person[i].dengji;
        person[i].id=i;
    }

    //n=3的特殊情况
    if(n==3){
        cout<<person[1].name<<" "<<person[1].zhiwei<<" "<<person[1].dengji<<endl;
        if(person[2].dengji>=person[3].dengji){
          
            cout<<person[2].name<<" "<<person[2].zhiwei<<" "<<person[2].dengji<<endl;
            cout<<person[3].name<<" "<<person[3].zhiwei<<" "<<person[3].dengji<<endl;
            return 0;
        }
        if(person[2].dengji<person[3].dengji){
            cout<<person[3].name<<" "<<person[3].zhiwei<<" "<<person[3].dengji<<endl;
            cout<<person[2].name<<" "<<person[2].zhiwei<<" "<<person[2].dengji<<endl;
            return 0;
        }
        // cout<<person[2].name<<" "<<person[2].zhiwei<<" "<<person[2].dengji<<endl;
        // cout<<person[3].name<<" "<<person[3].zhiwei<<" "<<person[3].dengji<<endl;
        // return 0;
    }
    //n>3的情况
    //先按照功勋排序
    sort(person+4,person+n+1,cmp1);
    // for(int i=4;i<=n;i++){
    //     for(int j=n;j>=i;j--){
    //         if(person[j].gongxian>person[j-1].gongxian){
    //             swap(person[j],person[j-1]);
    //         }
    //     }
    // }
    //输出
    //前三名
    cout<<person[1].name<<" "<<person[1].zhiwei<<" "<<person[1].dengji<<endl;
    // cout<<person[2].name<<" "<<person[2].zhiwei<<" "<<person[2].dengji<<endl;
    // cout<<person[3].name<<" "<<person[3].zhiwei<<" "<<person[3].dengji<<endl;
        if(person[2].dengji>=person[3].dengji){
            cout<<person[2].name<<" "<<person[2].zhiwei<<" "<<person[2].dengji<<endl;
            cout<<person[3].name<<" "<<person[3].zhiwei<<" "<<person[3].dengji<<endl;
            //return 0;
        }
        if(person[2].dengji<person[3].dengji){
            cout<<person[3].name<<" "<<person[3].zhiwei<<" "<<person[3].dengji<<endl;
            cout<<person[2].name<<" "<<person[2].zhiwei<<" "<<person[2].dengji<<endl;
            //return 0;
        }
    //4、5名护法
    if(n==4){cout<<person[4].name<<" HuFa "<<person[4].dengji;return 0;}
    if(person[4].dengji>=person[5].dengji){
        cout<<person[4].name<<" HuFa "<<person[4].dengji<<endl;
        cout<<person[5].name<<" HuFa "<<person[5].dengji<<endl;
    }
    if(person[4].dengji<person[5].dengji){
        cout<<person[5].name<<" HuFa "<<person[5].dengji<<endl;
        cout<<person[4].name<<" HuFa "<<person[4].dengji<<endl;
    }
    //长老
    if(n>9){
        sort(person+6,person+10,cmp);
        cout<<person[6].name<<" ZhangLao "<<person[6].dengji<<endl;
        cout<<person[7].name<<" ZhangLao "<<person[7].dengji<<endl;
        cout<<person[8].name<<" ZhangLao "<<person[8].dengji<<endl;
        cout<<person[9].name<<" ZhangLao "<<person[9].dengji<<endl;
    }
    else{
        sort(person+6,person+n+1,cmp);
        for(int i=6;i<=n;i++){
            cout<<person[i].name<<" ZhangLao "<<person[i].dengji<<endl;
        }
        return 0;
    }
    //堂主
    if(n>16){
        sort(person+10,person+17,cmp);
        for(int i=10;i<=16;i++){
            cout<<person[i].name<<" TangZhu "<<person[i].dengji<<endl;
        }
    }
    else{
        sort(person+10,person+n+1,cmp);
        for(int i=10;i<=n;i++){
            cout<<person[i].name<<" TangZhu "<<person[i].dengji<<endl;
        }
        return 0;
    }
    //精英
    if(n>41){
        sort(person+17,person+42,cmp);
        for(int i=17;i<=41;i++){
            cout<<person[i].name<<" JingYing "<<person[i].dengji<<endl;
        }
    }
    else{
        sort(person+17,person+n+1,cmp);
        for(int i=17;i<=n;i++){
            cout<<person[i].name<<" JingYing "<<person[i].dengji<<endl;
        }
        return 0;
    }
    //帮众
    sort(person+42,person+n+1,cmp);
    for(int i=42;i<=n;i++){
        cout<<person[i].name<<" BangZhong "<<person[i].dengji<<endl;
    }
    return 0;
}