#include<bits/stdc++.h>
using namespace std;
int n,na,nb,suma,sumb,ansa,ansb;
int a[205],b[205];
void pk(int x,int y){
    if((x==0&&y==0)||(x==1&&y==1)||(x==2&&y==2)||(x==3&&y==3)||(x==4&&y==4))return;
    if((x==0&&y==1)||(x==0&&y==4)||(x==1&&y==2)||(x==1&&y==4)||(x==2&&y==3)||(x==3&&y==0)||(x==3&&y==1)
    ||(x==4&&y==2)||(x==4&&y==3)||(x==2&&y==0)){
        ansb++;
        return;
    }
    ansa++;
    return;
}
int main(){
    cin>>n>>na>>nb;
    for(int i=0;i<na;i++){
        cin>>a[i];
    }
    for(int i=0;i<nb;i++){
        cin>>b[i];
    }

    for(int i=0;i<n;i++){
        if(suma>=na)suma-=na;
        if(sumb>=nb)sumb-=nb;
        pk(a[suma],b[sumb]);
        suma++;
        sumb++;
    }
    cout<<ansa<<" "<<ansb<<endl;
    return 0;
}