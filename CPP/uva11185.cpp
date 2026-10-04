#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    while(cin >> n && n>=0){
        if(n==0){
            cout << 0 << endl;
            continue;
        }
        string s = "";
        while(n>0){
            s+=to_string(n%3);
            n/=3;
        }
        reverse(s.begin(), s.end());
        cout << s << endl;
    }
    return 0;
}