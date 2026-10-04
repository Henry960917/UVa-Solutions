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
        string newS= s + s;
        string mn = newS.substr(0,s.size());
        for(int j = 1; j<s.size(); j++){
            string tmp = newS.substr(j, s.size());
            if(tmp<mn){
                mn = tmp;
            }
        }
        cout << mn << endl;
    }
    return 0;
}