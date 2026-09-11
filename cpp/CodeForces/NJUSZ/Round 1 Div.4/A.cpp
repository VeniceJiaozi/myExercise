#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        int sum1=0,sum2=0;
        sum1+=s[0]-'0';
        //sum1*=10;
        sum1+=s[1]-'0';
        //sum1*=10;
        sum1+=s[2]-'0';

        sum2+=s[3]-'0';
        //sum2*=10;
        sum2+=s[4]-'0';
        //sum2*=10;
        sum2+=s[5]-'0';

        if(sum1==sum2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}