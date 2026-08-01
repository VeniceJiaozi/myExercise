#include<bits/stdc++.h>
using namespace std;
bool l=true;
int main()
{
    string s;
    cin>>s;
    int n=s.size();
    int len=s.size();
    do{
        if(l){
            for(int i=0;i<n;i++)
                cout<<s[i];
            l=false;
        }
        else{
            for(int i=len-1;i>=len-n;i--)
                cout<<s[i];
            l=true;
        }
    }while(n--);
    return 0;
}