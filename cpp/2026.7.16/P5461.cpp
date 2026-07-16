#include<bits/stdc++.h>
using namespace std;
bool pd[10001][10001];//1表示被赦免，0表示未赦免
int i,j;
void she(int x1,int y1,int x2,int y2){
    if(x1==x2&&y1==y2){
        return;
    }
    else{
        //赦免左上角
        for(i=x1;i<=(x1+x2)/2;i++){
            for(j=y1;j<=(y1+y2)/2;j++){
                pd[i][j]=1;
            }
        }
        //递归一三四象限
        she((x1+x2+1)/2,y1,x2,(y1+y2-1)/2);
        she(x1,(y1+y2+1)/2,(x1+x2-1)/2,y2);
        she((x1+x2+1)/2,(y1+y2+1)/2,x2,y2);
    }
}
int main(){
    int n;
    cin>>n;
    she(0,0,pow(2,n)-1,pow(2,n)-1);
    for(int i=0;i<pow(2,n);i++){
        for(int j=0;j<pow(2,n);j++){
            if(pd[i][j]){
                cout<<"0"<<" ";
            }
            else{
                cout<<"1"<<" ";
            }
        }
        cout<<endl;
    }
}