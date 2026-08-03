#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="",ans="";
    cin>>s;
    int n=s.size();
    bool macthed[n];//标记是否配对
    for(int i=0;i<n;i++){
        macthed[i]=false;
    }
    stack<int> st;
    for(int i=0;i<n;i++){
        //是左括号就下标入栈
        if(s[i]=='('){
            st.push(i);
        }
        if(s[i]=='['){
            st.push(i);
        }
        //是右括号就最近的左括号出栈
        if(s[i]==')'){
            if(!st.empty()){
                int t=st.top();
                
                if(s[t]=='('){
                    st.pop();
                    macthed[i]=true;
                    macthed[t]=true;
                }
            }
        }
        if(s[i]==']'){
            if(!st.empty()){
                int t=st.top();
                
                if(s[t]=='['){
                    st.pop();
                    macthed[i]=true;
                    macthed[t]=true;
                }
            }
        }
    }
    //根据matched数组输出结果
    for(int i=0;i<n;i++){
        if(macthed[i]){
            ans+=s[i];
        }
        else{
            if(s[i]=='('){
                ans+="()";
            }
            if(s[i]=='['){
                ans+="[]";
            }
            if(s[i]==')'){
                ans+="()";
            }
            if(s[i]==']'){
                ans+="[]";
            }
        }
    }
    cout<<ans;
    return 0;
}