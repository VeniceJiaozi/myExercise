#include<bits/stdc++.h>
using namespace std;
int q,x,y,z,i,j;string str,str1;
int main(){
    cin>>q;
    cin>>str;
    for(i=0;i<q;i++){
        str1="";
        cin>>x;
        if(x==1){
            cin>>str1;
            str+=str1;
            cout<<str<<endl;
        }
        if(x==2){
            cin>>y>>z;
            for(j=y;j<y+z;j++){
                str1+=str[j];
            }
            str=str1;
            cout<<str<<endl;
        }
        if(x==3){
            cin>>y>>str1;
            str.insert(y,str1);
            cout<<str<<endl;
        }
        if(x==4){
            cin>>str1;
            size_t pos=str.find(str1);
            if(pos==string::npos){
                cout<<-1<<endl;
            }
            else{
                cout<<pos<<endl;
            }
        }
    }
    return 0;
}