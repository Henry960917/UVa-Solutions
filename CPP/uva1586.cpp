#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

double getW(char c){
    if(c=='C'){
        return 12.01;
    }
    if(c=='H'){
        return 1.008;
    }
    if(c=='O'){
        return 16.00;
    }
    if(c=='N'){
        return 14.01;
    }
    return 0.0;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    for(int i = 0; i<t; i++){
        string s;
        cin >> s;
        double mass=0;
        for(int j = 0; j<s.size();){
            double w = getW(s[j]);
            j++;
            int cnt = 0;
            while (j < s.size() && isdigit(s[j])) {
                cnt = cnt*10+(s[j]-'0');
                j++;
            }
            if(cnt==0){
                cnt=1;
            }
            mass+=w*cnt;
        }
        cout << fixed << setprecision(3) << mass << endl;
    }
    return 0;
}