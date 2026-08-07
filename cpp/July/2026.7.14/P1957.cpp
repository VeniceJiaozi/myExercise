#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,y,z,num=0;
    string x,s;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        cin>>x;
        if(x=="a"){
            cin>>y>>z;
            num=1;
            printf("%d+%d=%d\n",y,z,y+z);
            s=to_string(y)+to_string(z)+to_string(y+z);
            printf("%d\n",s.length()+2);
        }
        else if(x=="b"){
            cin>>y>>z;
            num=2;
            printf("%d-%d=%d\n",y,z,y-z);
            s=to_string(y)+to_string(z)+to_string(y-z);
            printf("%d\n",s.length()+2);
        }
        else if(x=="c"){
            cin>>y>>z;
            num=3;
            printf("%d*%d=%d\n",y,z,y*z);
            s=to_string(y)+to_string(z)+to_string(y*z);
            printf("%d\n",s.length()+2);
        }
        else{
            y=stoi(x);
            cin>>z;
            if(num==1){
                printf("%d+%d=%d\n",y,z,y+z);
                s=to_string(y)+to_string(z)+to_string(y+z);
                printf("%d\n",s.length()+2);
            }
            if(num==2){
                printf("%d-%d=%d\n",y,z,y-z);
                s=to_string(y)+to_string(z)+to_string(y-z);
                printf("%d\n",s.length()+2);
            }
            if(num==3){
                printf("%d*%d=%d\n",y,z,y*z);
                s=to_string(y)+to_string(z)+to_string(y*z);
                printf("%d\n",s.length()+2);
            }
        }
    }
    return 0;
}