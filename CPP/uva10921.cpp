// Find the Telephone: 建表
#include <iostream>
#include <string>
using namespace std;

string sAlpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
string sNum = "22233344455566677778889999";

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    while(cin >> s){
        string ans = "";
        for(int i = 0; i<s.size(); i++){
            if(isalpha(s[i])){
                ans += sNum[s[i]-'A'];
                continue;
            }
            ans += s[i];
        }
        cout << ans << '\n';
    }
    return 0;
}