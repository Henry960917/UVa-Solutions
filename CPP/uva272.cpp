// TeX Quotes: 設一個bool看是否第一次出現，是:"``" 否:"''"
#include <iostream>
using namespace std;

int main(){
    string s;
    bool first = true;
    while(getline(cin, s)){
        for(int i = 0; i<s.size(); i++){
            if(s[i]=='"'){
                if(first){
                    cout << "``";
                }
                else{
                    cout << "''";
                }
                first = !first;
            }
            else{
                cout << s[i];
            }
        }
        cout << "\n";
    }
    return 0;
}