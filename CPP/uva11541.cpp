// Decoding: 如果是字母就往後找數字，設一個string再轉int計次數
#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t, cases=1;
    cin >> t;
    for(int i = 0; i<t; i++){
        cout << "Case " << cases++ << ": ";
        string s;
        cin >> s;
        string ans = "";
        for(int j = 0; j<s.size(); j++){
            string times = "";
            if(isalpha(s[j])){
                int cnt = 1;
                while(j+cnt<s.size() && isdigit(s[j+cnt])){                        
                    times+=s[j+cnt];
                    cnt++;
                }
                int timesInt = stoi(times);
                for(int i = 0; i<timesInt; i++){
                    ans+=s[j];
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}