// Cool Word: 算每個string字母出現次數，若字母出現次數相異，那就是cool word，開一個countsV把0先去除再sort
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    int cases = 1;
    while(cin >> n){
        int cnt = 0;
        for(int i = 0; i<n; i++){
            vector<int> v(26, 0);
            string s;
            cin >> s;
            for(int j = 0; j<s.size(); j++){
                v[s[j]-'a']++;
            }
            vector<int> countsV;
            for(int j = 0; j<26; j++){
                if(v[j]>0){
                    countsV.push_back(v[j]);
                }
            }
            bool isCool = false;
            if(countsV.size()>=2){
                sort(countsV.begin(), countsV.end());
                bool allDiff = true;
                for(int j = 0; j<countsV.size()-1; j++){
                    if(countsV[j]!=0 && countsV[j+1]!=0){
                        if(countsV[j]==countsV[j+1]){
                            allDiff = false;
                            break;
                        }
                    }
                }
                if(allDiff){
                    isCool = true;
                }
            }
            if(isCool){
                cnt++;
            }
        }
        cout << "Case " << cases << ": " << cnt << endl;
        cases++;
    }
    return 0;
}