//直接用迴圈暴力遍歷ST，開兩個字串來存數字運算
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    while(cin >>s){
        string yuanfen = "";
        bool ok = false;
        for(int i = 1; i<=10000; i++){
            yuanfen="";
            for(int j = 0; j<s.size(); j++){
                yuanfen+=to_string((s[j]-'A')+i);
            }
            while(yuanfen.size()>2){
                if(yuanfen=="100"){
                    break;
                }
                string cal = "";
                for(int j = 0; j<yuanfen.size()-1; j++){
                    cal+=to_string(((yuanfen[j]-'0')+(yuanfen[j+1]-'0'))%10);
                }
                yuanfen=cal;
            }
            if(yuanfen=="100"){
                ok = true;
                cout << i << endl;
                break;
            }
        }
        if(!ok){
            cout << ":(" << endl;
        }
    }
    return 0;
}