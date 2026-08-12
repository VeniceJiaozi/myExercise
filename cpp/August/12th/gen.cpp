#include<bits/stdc++.h>
using namespace std;

int main(){
    srand(time(0));
    int n = 1000;  // 洛谷最大短文数
    cout << n << endl;
    
    set<string> all_words;
    vector<string> words = {"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z","ab","cd","ef","gh","ij","kl","mn","op","qr","st","uv","wx","yz"};
    
    for(int i=0; i<n; i++){
        int m = rand() % 5000 + 1;  // 每篇短文单词数
        cout << m;
        for(int j=0; j<m; j++){
            string w = words[rand() % words.size()];
            cout << " " << w;
            all_words.insert(w);
        }
        cout << endl;
    }
    
    int q = 10000;
    cout << q << endl;
    vector<string> query(all_words.begin(), all_words.end());
    for(int i=0; i<q; i++){
        cout << query[rand() % query.size()] << endl;
    }
    return 0;
}