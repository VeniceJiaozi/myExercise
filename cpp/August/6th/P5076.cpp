#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;//前序后序
    cin>>s1>>s2;
    int n=s1.size();
    int k=0;
    for(int i=0;i<n;i++){
        for(int j=1;j<n;j++){
            if(s1[i]==s2[j]&&s1[i+1]==s2[j-1]){
                k++;
            }
        }
    }
    printf("%d",1<<k);
    return 0;
}