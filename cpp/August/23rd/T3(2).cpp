#include<bits/stdc++.h>
using namespace std;
const string hexToBin[16] = {
    "0000", "0001", "0010", "0011",
    "0100", "0101", "0110", "0111",
    "1000", "1001", "1010", "1011",
    "1100", "1101", "1110", "1111"
};
int main(){
    int n;
    cin>>n;
    string s,ans="";
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]>='0'&&s[i]<='9'){
            ans+=hexToBin[s[i]-'0'];
        }
        else{
            ans+=hexToBin[s[i]-'A'+10];
        }
    }
    size_t pos=ans.find_first_not_of('0');
    if(pos==string::npos){
        cout<<0<<endl;
    }
    else{
        cout<<ans.substr(pos)<<endl;
    }
    return 0;
}