#include<bits/stdc++.h>
using namespace std;
string jieya(string s){
    while(1){
        //寻找最内层的[]
        int l=s.rfind('[');
        if(l==string::npos) break;
        int r=s.find(']',l);
        //判断数字几位
        if(s[l+2]>='0'&&s[l+2]<='9')//两位数字
        {   
            //将最内层括号中的内容（不含数字）提取到inner中
            string inner=s.substr(l+3,r-l-3);
            int num=s[l+1]-'0'+(s[l+2]-'0')*10;
            string expand="";
            expand.reserve(num*inner.size());
            for(int i=0;i<num;i++)
                expand+=inner;
            s=s.substr(0,l)+expand+s.substr(r+1);
        }
        //一位数字
        else{
            string inner=s.substr(l+2,r-l-2);
            int num=s[l+1]-'0';
            string expand="";
            expand.reserve(num*inner.size());
            for(int i=0;i<num;i++)
                expand+=inner;
            s=s.substr(0,l)+expand+s.substr(r+1);
        }
        
    }
    return s;
}
int main()
{
    string str;
    cin>>str;
    cout<<jieya(str)<<endl;
    return 0;
}