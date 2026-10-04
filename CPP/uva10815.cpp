//用set做個dic
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s, tmp="";
    set<string> dic;
    while(getline(cin, s)){
        for(int i = 0; i<s.size(); i++){
            if(isalpha(s[i])){
                tmp += tolower(s[i]);
            }
            else{
                if(tmp.empty()==false){
                    dic.insert(tmp);
                    tmp = "";
                }
            }
        }
        if(tmp.empty()==false){
            dic.insert(tmp);
            tmp = "";
        }
    }
    for(const auto &x: dic){
        cout << x << endl;
    }
    return 0;
}