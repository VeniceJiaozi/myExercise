#include<bits/stdc++.h>
using namespace std;
float x11,x2,x3,y11,y2,y3;float ans;
float dist(float a1,float a2,float b1,float b2){
    return pow(pow(a1-a2,2)+pow(b1-b2,2),0.5);
}
int main(){
    cin>>x11>>y11>>x2>>y2>>x3>>y3;
    printf("%.2f",dist(x11,x2,y11,y2)+dist(x11,x3,y11,y3)+dist(x2,x3,y2,y3));
    return 0;
}