#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.size();
    int num=0;
    stack<int> st;
    for(int i=0;i<n;i++){
        num=0;
        //是数字就处理后入栈
        if(s[i]>='0'&&s[i]<='9'){
            do{
                num=num*10+s[i]-'0';
                i++;
            }while(s[i]!='.');
            st.push(num);
        }
        //cout<<num<<endl;
        //是运算符就出栈两个运算后再压入栈
        if(s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'){
            int a=st.top();
            st.pop();
            int b=st.top();
            st.pop();
            int c=0;
            if(s[i]=='+') c=a+b;
            if(s[i]=='-') c=b-a;
            if(s[i]=='*') c=a*b;
            if(s[i]=='/') c=b/a;
            st.push(c);
        }
    }
    cout<<st.top()<<endl;
    return 0;
}