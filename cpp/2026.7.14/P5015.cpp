#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    str.erase(remove(str.begin(),str.end(),' '),str.end());
    printf("%d",str.length());
    return 0;
}