#include <iostream>
#include <map>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    string s;
    vector<string> words;
    map<string, int> cnt;
    while(getline(cin, s)){
        string tmp="";
        if(s=="#"){
            break;
        }
        for(int i = 0; i<s.size(); i++){
            if(isalpha(s[i])){
                tmp+=s[i];
            }
            else{
                if(!tmp.empty()){
                    string key = tmp;
                    for(int j = 0; j<key.size(); j++){
                        key[j]=tolower(key[j]);
                    }
                    sort(key.begin(), key.end());
                    cnt[key]++;
                    words.push_back(tmp);
                    tmp="";
                }
            }
        }
        if(!tmp.empty()){   
            string key = tmp;
            for(int j = 0; j<key.size(); j++){
                key[j]=tolower(key[j]);
            }
            sort(key.begin(), key.end());
            cnt[key]++;
            words.push_back(tmp);
        }
    }
    vector<string> ans;
    for(int i = 0; i<words.size(); i++){
        string key = words[i];
        for(int j = 0; j<key.size(); j++){
            key[j] = tolower(key[j]);
        }
        sort(key.begin(), key.end());
        if(cnt[key]==1){
            ans.push_back(words[i]);
        }
    }
    sort(ans.begin(), ans.end());
    for(int i = 0; i<ans.size(); i++){
        cout << ans[i] << endl;
    }
    return 0;
}