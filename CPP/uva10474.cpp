#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string l;
    while(getline(cin, l)){
        int sum = 0, x;
        stringstream ss(l);
        while(ss>>x){
            sum+=x;
        }
        cout << sum << endl;
    }
    return 0;
}