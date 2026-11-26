// Generating Fast, Sorted Permutation: 用v紀錄哪個位置的字已經用過(先全false)，出現過、重複i>0情況下(v[i-1]==false && s[i]==s[i-1])就跳過，
// 然後dfs後 return了把v[i]再設false回溯
#include <iostream>
#include <vector>
#include <algorithm>
#pragma GCC optimize("Ofast")
using namespace std;

vector<bool> v(12, false);
string ans = "";
string s;

void dfs(int depth){
    int len = s.size();
    if(depth==len){
        cout << ans << '\n';
        return;
    }
    for(int i = 0; i<s.size(); i++){
        if(v[i]){ 
            continue;
        }
        if(i>0){
            if(v[i-1]==false && s[i]==s[i-1]){
                continue;
            }
        }
        v[i] = true;
        ans.push_back(s[i]);
        dfs(depth+1);
        v[i] = false;
        ans.pop_back();
    }
}

int main(){
    int n;
    cin >> n;
    for(int i = 0; i<n; i++){
        cin >> s;
        sort(s.begin(), s.end());
        dfs(0);
        cout << '\n';
    }
    return 0;
}