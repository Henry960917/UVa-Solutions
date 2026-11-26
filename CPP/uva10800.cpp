// Not That Kind of Graph: 用2陣列分別記錄字元所在高度、符號，紀錄MXR、MNR、lastCol(最右邊有符號的idx)、底線比原圖長一格
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    int cases = 1;
    for(int i = 0; i<n; i++){
        cout << "Case #" << cases++ << ":" << endl;
        string s;
        cin >> s;
        int now = 0, mxR = -1, mnR = 0;
        vector<int> row(s.size(), 0);
        vector<char> c(s.size(), ' ');
        for(int i = 0; i<s.size(); i++){
            if(s[i]=='R'){
                row[i] = now;
                c[i] = '/';
                now++;
            }
            else if(s[i]=='F'){
                now--;
                row[i] = now;
                c[i] = '\\';
            }
            else{
                row[i] = now;
                c[i] = '_';
            }
            mxR = max(mxR, row[i]);
            mnR = min(mnR, row[i]);
        }
        for(int i = mxR; i>=mnR; i--){
            int lastCol = -1;
            for(int j = 0; j<s.size(); j++){
                if(row[j]==i){
                    lastCol = j;
                }
            }
            cout << "| ";
            for(int j = 0; j <= lastCol; j++){
                if(row[j] == i){
                    cout << c[j];
                }
                else{
                    cout << ' ';
                }
            }
            cout << '\n';
        }
        cout << "+";
        for(int i = 0; i<s.size()+2; i++){
            cout << "-";
        }
        cout << '\n';
    }
    return 0;
}