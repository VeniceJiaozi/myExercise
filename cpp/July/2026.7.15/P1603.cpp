#include<bits/stdc++.h>
using namespace std;
unordered_map<string,int>dict{
    {"zero",0},{"one",1},{"two",2},{"three",3},
    {"four",4},{"five",5},{"six",6},{"seven",7},
    {"eight",8},{"nine",9},{"ten",10},{"eleven",11},
    {"twelve",12},{"thirteen",13},{"fourteen",14},
    {"fifteen",15},{"sixteen",16},{"seventeen",17},
    {"eighteen",18},{"nineteen",19},{"twenty",20},
    {"a",1},{"both",2},{"another",1},{"first",1},
    {"second",2},{"third",3}
};
int main(){
    vector<string> parts;
    string x;
    //将输入的所有数字转为两位数并存储在parts中
    while(cin>>x){
        if(dict.count(x)){
            int num=dict[x];
            num=(num*num)%100;
            char buf[3];
            sprintf(buf,"%02d",num);
            parts.push_back(string(buf));
        }
    }
    //为空的特殊情况
    if(parts.empty()){
        cout<<0<<endl;
        return 0;
    }
    //遍历全排列
    sort(parts.begin(),parts.end());
    string minpass="";
    bool first=true;
    //do{
        string current="";
        //拼接
        for(const string& s:parts){
            current+=s;
        }
        //去除前导零
        size_t start=current.find_first_not_of('0');
        if(start!=string::npos){
            current=current.substr(start);
        }
        else{
            current="0";
        }
        // //更新最小密码
        // long long currentNum=stoll(current);
        // long long minNum=stoll(minpass);
        // if(first||currentNum<minNum){
        //     minpass=current;
        //     first=false;
        // }
    //}while(next_permutation(parts.begin(),parts.end()));
    cout<<current<<endl;
    return 0;
}