#include <iostream>
#include <vector>
using namespace std;
string s = "`1234567890-=QWERTYUIOP[]ASDFGHJKL;'ZXCVBNM,./";
int main(){
    string words;
    while(getline(cin, words)){
        for(int i = 0; i<words.size(); i++){
            if(words[i]==' '){
                cout << ' ';
                continue;
            }
            for(int j = 0; j<s.size(); j++){
                if(words[i]==s[j]){
                    cout << s[j-1];
                }
            }
        }
        cout << endl;
    }
    return 0;
}