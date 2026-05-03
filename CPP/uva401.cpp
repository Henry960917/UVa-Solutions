#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
string s = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string words;
    while(getline(cin, words)){
        bool rp = false, ms = false;
        string tmp, mir, ori;
        tmp = words;
        ori = words;
        mir = words;
        reverse(words.begin(), words.end());
        if(tmp==words){
            rp = true;
        }
        for(int i = 0; i<tmp.size(); i++){
            if(isalpha(tmp[i])){
                tmp[i] = s[tmp[i]-65];
            }
            else{
                tmp[i] = s[tmp[i]-'1'+26];
            }
        }
        reverse(tmp.begin(), tmp.end());
        if(tmp==mir){
            ms = true;
        }
        if(!rp&&!ms){
            cout << ori << " -- is not a palindrome."<< endl<< endl;
        }
        else if(rp&&!ms){
            cout << ori << " -- is a regular palindrome."<< endl<< endl;
        }
        else if(!rp&&ms){
            cout << ori << " -- is a mirrored string."<< endl<< endl;
        }
        else if(rp&&ms){
            cout << ori << " -- is a mirrored palindrome."<< endl<< endl;
        }
    }
    return 0;
}