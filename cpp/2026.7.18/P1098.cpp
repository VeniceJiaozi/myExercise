#include<bits/stdc++.h>
using namespace std;
int main(){
    int p1,p2,p3;
    string s,news="";
    cin>>p1>>p2>>p3;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='-'){
            //判断是否是连续的数字
            if(s[i-1]>='0'&&s[i-1]<='9'&&s[i+1]>='0'&&s[i+1]<='9'&&s[i-1]<s[i+1]){
                if(s[i-1]-'0'+1==s[i+1]-'0') continue;
                if(p1==1||p1==2){
                    if(p3==1){
                        for(int j=s[i-1]-'0'+1;j<s[i+1]-'0';j++){
                            for(int k=0;k<p2;k++)news+=j+'0';
                        }
                    }
                    else if(p3==2){
                        for(int j=s[i+1]-'0'-1;j>s[i-1]-'0';j--){
                            for(int k=0;k<p2;k++)news+=j+'0';
                        }
                    }
                }
                else if(p1==3){
                    for(int j=0;j<p2*(s[i+1]-s[i-1]-1);j++)news+="*";
                }
            }
            //连续字母
            else if(s[i-1]>='a'&&s[i-1]<='z'&&s[i+1]>='a'&&s[i+1]<='z'&&s[i-1]<s[i+1]){
                if(s[i-1]-'a'+1==s[i+1]-'a') continue;
                if(p1==1){
                    if(p3==1){
                        for(int j=s[i-1]-'a'+1;j<s[i+1]-'a';j++){
                            for(int k=0;k<p2;k++)news+=j+'a';
                        }
                    }
                    else if(p3==2){
                        for(int j=s[i+1]-'a'-1;j>s[i-1]-'a';j--){
                            for(int k=0;k<p2;k++)news+=j+'a';
                        }
                    }
                }
                else if(p1==2){
                    if(p3==1){
                        for(int j=s[i-1]-'a'+1;j<s[i+1]-'a';j++){
                            for(int k=0;k<p2;k++)news+=j+'A';
                        }
                    }
                    else if(p3==2){
                        for(int j=s[i+1]-'a'-1;j>s[i-1]-'a';j--){
                            for(int k=0;k<p2;k++)news+=j+'A';
                        }
                    }
                }
                else if(p1==3){
                    for(int j=0;j<p2*(s[i+1]-s[i-1]-1);j++)news+="*";
                }
            }
            else news+=s[i];
        }
        else news+=s[i];
    }
    cout<<news<<endl;
    return 0;
}