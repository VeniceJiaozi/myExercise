#include<bits/stdc++.h>
using namespace std;
int l,h,r;
struct Event{
    int h;
    int x;//事件发生的坐标
    bool enter;//1表示进入，0表示离开
};
bool cmp(const Event &a,const Event &b){
    return a.x<b.x;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    vector<Event> events;
    while(cin>>l>>h>>r){
        events.push_back({h,l,1});
        events.push_back({h,r,0});
    }
    sort(events.begin(), events.end(), cmp);
    multiset<int> heights;
    heights.insert(0);
    int last_x=0;
    vector<pair<int,int>> ans;
    int i=0;
    int total=events.size();
    while(i<total){
        int cur_x=events[i].x;
        while(i<total&&events[i].x==cur_x){
            if(events[i].enter){
                heights.insert(events[i].h);
            }
            else{
                multiset<int>::iterator it=heights.find(events[i].h);
                if(it!=heights.end()){
                    heights.erase(it);
                }
            }
            i++;
        }
        multiset<int>::reverse_iterator rit=heights.rbegin();
        int cur_max=*rit;
        if(cur_max!=last_x){
            ans.push_back(make_pair(cur_x,cur_max));
            last_x=cur_max;
        }
    }
    for(vector<pair<int,int>>::iterator it=ans.begin();it!=ans.end();++it){
        cout<<it->first<<" "<<it->second<<endl;
    }
    return 0;
}