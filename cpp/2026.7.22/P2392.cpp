#include<bits/stdc++.h>
using namespace std;
int main(){
    int s[4];
    for(int i=0;i<4;i++){
        scanf("%d",s[i]);
    }
    int a[s[0]],b[s[1]],c[s[2]],d[s[3]];
    for(int i=0;i<s[0];i++){
        scanf("%d",a[i]);
    }
    for(int i=0;i<s[1];i++){
        scanf("%d",b[i]);
    }
    for(int i=0;i<s[2];i++){
        scanf("%d",c[i]);
    }
    for(int i=0;i<s[3];i++){
        scanf("%d",d[i]);
    }
    //以上是输入
    bool time[2][2000];//time[0]表示左脑,time[1]表示右脑，0表示空闲
    memset(time,false,sizeof(time));
    for(int i=0;i<s[0];i++){
        //遍历每个任务
        do{
            
        }while(time[0][j]||time[1][j]);
    }

}