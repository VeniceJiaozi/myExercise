#include<bits/stdc++.h>
using namespace std;
int minn=1001,maxn=0;int l[26];
bool zhi(int x){
    int i=2;
    while(i<=pow(x,0.5)){
        if(x%i==0){
            return 0;
        }
        i++;
    }
    return 1;
}
int main(){
    string str;
    cin>>str;
    for(int i=0;i<str.length();i++){
        //cout<<str[i]-97;
        l[str[i]-97]++;
        //cout<<l[str[i]-97];
    }
    for(int i=0;i<26;i++){
        if(l[i]>maxn){
            maxn=l[i];
        }
        if(l[i]<minn&&l[i]!=0){
            minn=l[i];
        }
    }
    // for(int i:l){
    //     cout<<i;
    // }
    //cout<<maxn<<endl<<minn;
    if(maxn-minn==0||maxn-minn==1){
        printf("No Answer\n");
        printf("0");
        return 0;
    }
    if(zhi(maxn-minn)){
        printf("Lucky Word\n");
        printf("%d",maxn-minn);
    }
    else{
        printf("No Answer\n");
        printf("0");
    }
    return 0;
}