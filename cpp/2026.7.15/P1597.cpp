#include<bits/stdc++.h>
using namespace std;
string str;int i;char a='0',b='0',c='0',x,y;
int main(){
    while(scanf("%c:=%c;",&x,&y)==2){
        //scanf("%c:=%c;",&x,&y);
        if(x=='a'){
            if(y<='9'&&y>='0'){
                a=y;
            }
            if(y=='b')a=b;
            if(y=='c')a=c;
        }
        if(x=='b'){
            if(y<='9'&&y>='0'){
                b=y;
            }
            if(y=='a')b=a;
            if(y=='c')b=c;
        }
        if(x=='c'){
            if(y<='9'&&y>='0'){
                c=y;
            }
            if(y=='b')c=b;
            if(y=='a')c=a;
        }
    }
    // scanf("%c:=%c;",&x,&y);
    // if(x<='9'&&x>='0'){
    //     b=x;
    // }
    // if(x=='a')b=a;
    // if(x=='c')b=c;

    // scanf("%c:=%c;",&x,&y);
    // if(x<='9'&&x>='0'){
    //     c=x;
    // }
    // if(x=='b')c=b;
    // if(x=='a')c=a;
    cout<<a<<" "<<b<<" "<<c<<endl;
    return 0;
}