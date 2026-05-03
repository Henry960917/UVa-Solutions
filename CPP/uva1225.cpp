#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    for(int i = 0; i<t; i++){
        int n;
        cin >> n;
        string s="";
        vector<int> v(10,0);
        for(int i = 1; i<=n; i++){
            s+=to_string(i);
        }
        for(int i = 0; i<s.size(); i++){
            v[s[i]-'0']++;
        }
        cout << v[0];
        for(int i = 1; i<v.size(); i++){
            cout << " " << v[i];
        }
        cout << endl;
    }
    return 0;
}