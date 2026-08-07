#include<bits/stdc++.h>
using namespace std;
int i,tol1=1,tol2=1;
int main(){
    string str1="",str2="";
    cin>>str1>>str2;
    int n1=str1.length(),n2=str2.length();
    for(i=0;i<n1;i++){
        tol1*=(int)str1[i]-64;
    }
    for(i=0;i<n2;i++){
        tol2*=(int)str2[i]-64;
    }
    if(tol1%47==tol2%47)cout<<"GO";
    else cout<<"STAY";
    return 0;
}