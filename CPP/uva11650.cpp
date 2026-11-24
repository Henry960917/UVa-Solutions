// Mirror Clock: 換成分鐘 total:(HH%12)*60+MM mirror:(720-total)%720
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    for(int i = 0; i<t; i++){
        string s;
        cin >> s;
        int HH = (s[0]-'0')*10+(s[1]-'0');
        int MM = (s[3]-'0')*10+(s[4]-'0');
        
        int total = (HH%12)*60+MM;
        int mirror = (720-total)%720;
        int ansHH = mirror/60;
        int ansMM = mirror%60;
        if(ansHH==0){
            ansHH = 12;
        }
        cout << setfill('0') << setw(2) << ansHH << ":";
        cout << setfill('0') << setw(2) << ansMM << endl;
    }
    return 0;
}