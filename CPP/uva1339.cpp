#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s,ss;
    while(cin >> s >> ss){
        vector<int> cnt1(26,0);
        vector<int> cnt2(26,0);
        for(int i = 0; i<s.size(); i++){
            cnt1[s[i]-'A']++;
            cnt2[ss[i]-'A']++;
        }
        bool ok = true;
        sort(cnt1.begin(), cnt1.end());
        sort(cnt2.begin(), cnt2.end());
        for(int i = 0; i<26; i++){
            if(cnt1[i]!=cnt2[i]){
                ok = false;
                break;
            }
        }
        if(ok){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}