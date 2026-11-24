// 
#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    int cnt = 0;
    while(cin >> s){
        if(s=="XXXXXX"){
            cnt++;
        }
        if(cnt==2){
            break;
        }
    }
    return 0;
}