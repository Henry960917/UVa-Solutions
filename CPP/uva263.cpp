#include <iostream>
#include <string>
#include <set>
#include <algorithm>
using namespace std;

int main(){
    int n;
    while(cin >> n && n!=0){
        cout << "Original number was " << n << endl;
        int cnt = 0;
        set<int> chain;
        chain.insert(n);
        while(true){
            string s = to_string(n);
            sort(s.begin(),s.end());
            string b = s;
            reverse(s.begin(),s.end());
            string a = s;
            int x = stoi(a);
            int y = stoi(b);
            cout << x << " - " << y << " = " << x-y << endl;
            cnt++;
            if(chain.count(x-y)){
                break;
            }
            chain.insert(x-y);
            n = x-y;
        }
        cout << "Chain length " << cnt << endl;
        cout << endl;
    }
    return 0;
}