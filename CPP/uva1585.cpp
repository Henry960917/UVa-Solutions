#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    for(int i = 0; i<t; i++){
        string s;
        cin >> s;
        int cnt = 1, sum = 0;
        for(int j = 0; j<s.length(); j++){
            if(s[j]=='O'){
                sum+=cnt;
                cnt++;
            }
            else if(s[j]=='X'){
                cnt=1;
            }
        }
        cout << sum << endl;
    }
    return 0;
}