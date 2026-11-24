// One-Two-Three: 長度5就是3，另外兩個就列一下狀況
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    for(int i = 0; i<n; i++){
        string s;
        cin >> s;
        if(s.size()==5){
            cout << 3 << '\n';
            continue;
        }
        else{
            if(s[0]=='o'&&s[1]=='n'){
                cout << 1 << endl;
            }
            else if(s[0]=='o'&&s[2]=='e'){
                cout << 1 << endl;
            }
            else if(s[1]=='n'&&s[2]=='e'){
                cout << 1 << endl;
            }
            if(s[0]=='t'&&s[1]=='w'){
                cout << 2 << endl;
            }
            else if(s[0]=='t'&&s[2]=='o'){
                cout << 2 << endl;
            }
            else if(s[1]=='w'&&s[2]=='o'){
                cout << 2 << endl;
            }
        }
    }
    return 0;
}