#include<bits/stdc++.h>
using namespace std;
char l1[10][10],l2[10][10],l3[10][10],l4[10][10];int n;bool biaoji=0;
bool test(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(l4[i][j]!=l2[i][j]){
                return 0;
            }
        }
    }
    return 1;
}
void turn90(){
    //对角线翻转
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            l3[i][j]=l1[n-1-j][n-1-i];
        }
    }
    //上下互换
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            l4[i][j]=l3[n-1-i][j];
        }
    }
}
void turn180(){
    turn90();//转90度
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            l3[i][j]=l4[n-1-j][n-1-i];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            l4[i][j]=l3[n-1-i][j];
        }
    }
}
void turn270(){
    turn90();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            l3[i][j]=l4[n-1-j][n-1-i];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            l4[i][j]=l3[n-1-i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            l3[i][j]=l4[n-1-j][n-1-i];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            l4[i][j]=l3[n-1-i][j];
        }
    }
}
void reflect(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            l4[i][j]=l1[i][n-1-j];
        }
    }
}
void combine(){
    //对角线翻转
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            l3[i][j]=l4[n-1-j][n-1-i];
        }
    }
    //上下互换
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            l4[i][j]=l3[n-1-i][j];
        }
    }
    if(test()){
        printf("5");
        biaoji=1;
        return;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            l3[i][j]=l4[n-1-j][n-1-i];
        }
    }
    //上下互换
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            l4[i][j]=l3[n-1-i][j];
        }
    }
    if(test()){
        printf("5");
        biaoji=1;
        return;
    //对角线翻转
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            l3[i][j]=l4[n-1-j][n-1-i];
        }
    }
    //上下互换
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            l4[i][j]=l3[n-1-i][j];
        }
    }
    if(test()){
        printf("5");
        biaoji=1;
        return;
    }
}
void bubian(){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            l4[i][j]=l1[i][j];
        }
    }
}
int main(){
    scanf("%d",&n);
    //输入
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf(" %c",&l1[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf(" %c",&l2[i][j]);
        }
    }
    turn90();
    if(test()){
        printf("1");
        return 0;
    }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         printf("%c",l4[i][j]);
    //     }
    // }
    turn180();
    if(test()){
        printf("2");
        return 0;
    }
    turn270();
    if(test()){
        printf("3");
        return 0;
    }
    reflect();
    if(test()){
        printf("4");
        return 0;
    }
    combine();
    bubian();
    if(test()){
        printf("6");
        return 0;
    }
    if(biaoji==0){
        printf("7");
    }
    return 0;
}