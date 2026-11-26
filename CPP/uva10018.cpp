// Reverse and Add: revToNum將s反轉後轉成整數（實際型別為 long long）
#include <iostream>
#include <string>
#include <algorithm>
#define int long long
using namespace std;

bool isPalin(string s) {
    string rev = s;
    reverse(rev.begin(), rev.end());
    return s == rev;
}

int revToNumber(string s) {
    string rev = s;
    reverse(rev.begin(), rev.end());
    long long val = 0;
    for (char c : rev) {
        val = val * 10 + (c - '0');
    }
    return val;
}

signed main(){
    int n;
    cin >> n;
    for(int i = 0; i<n; i++){
        int p;
        cin >> p;
        string tmp = to_string(p);
        p += revToNumber(tmp);
        int cnt = 1;
        while(!isPalin(to_string(p))){
            tmp = to_string(p);
            p += revToNumber(tmp);
            cnt++;
        }
        cout << cnt << " " << p << '\n';
    }
    return 0;
}