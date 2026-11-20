#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string a, b;
    while(getline(cin, a)){
        getline(cin, b);
        vector<char> v;
        vector<int> aa(26, 0);
        vector<int> bb(26, 0);
        for(int i = 97; i<=122; i++){
            for(int j = 0; j<a.size(); j++){
                if(int(a[j])-i==0){
                    aa[int(a[j])-'a']++;
                }
            }
        }
        for(int i = 97; i<=122; i++){
            for(int j = 0; j<b.size(); j++){
                if(int(b[j])-i==0){
                    bb[int(b[j])-'a']++;
                }
            }
        }
        for(int i = 0; i<26; i++){
            int cnt = min(aa[i], bb[i]);
            for(int j = 0; j<cnt; j++){
                v.push_back(char(i+'a'));
            }
        }
        for(int i = 0; i<v.size(); i++){
            cout << v[i];
        }
        cout << endl;
    }
    return 0;
}