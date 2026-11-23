// Antiarithmetic: 去窮舉公差d 外層i:從0~n-1，內層d:i+2d<n(條件) 然後看是不是有成等差
#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    while(cin >> n && n!=0){
        vector<int> v(n);
        bool found = false;
        char colon;
        cin >> colon;
        for(int i = 0; i<n; i++){
            cin >> v[i];
        }
        for(int i = 0; i<n; i++){
            for(int d = 1; i+2*d<n; d++){
                int b = i + d;
                int c = i + 2*d;
                if (v[i]<v[b] && v[b]<v[c]) {
                    found = true;
                    break;
                }
            }
        }
        if(found){
            cout << "no" << endl;
        }
        else{
            cout << "yes" << endl;
        }
    }
    return 0;
}