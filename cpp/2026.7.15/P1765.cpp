#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;int ans=0;
    getline(cin,str);
    for(int i=0;i<str.length();i++){
        if(str[i]=='a'||str[i]=='d'||str[i]=='g'||str[i]=='j'||str[i]=='m'||str[i]=='p'||str[i]=='t'||str[i]=='w'||str[i]==' '){
            ans++;
        }
        if(str[i]=='b'||str[i]=='e'||str[i]=='h'||str[i]=='k'||str[i]=='n'||str[i]=='q'||str[i]=='u'||str[i]=='x'){
            ans+=2;
        }
        if(str[i]=='c'||str[i]=='f'||str[i]=='i'||str[i]=='l'||str[i]=='o'||str[i]=='r'||str[i]=='v'||str[i]=='y'){
            ans+=3;
        }
        if(str[i]=='s'||str[i]=='z'){
            ans+=4;
        }
    }
    printf("%d\n",ans);
    return 0;
}