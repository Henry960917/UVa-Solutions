#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n, kase = 1;
    while(cin >> n, n){
        cout << "Game " << kase++ << ":" << endl;
        vector<int> ans(n);
        for(int i = 0; i<n; i++){
            cin >> ans[i];
        }
        while(true){
            int a=0, b=0;
            bool allZero = true;
            vector<int> guess(n);
            for(int i = 0; i<n; i++){
                cin >> guess[i];
                if(guess[i]!=0){
                    allZero = false;
                }
                if(guess[i]==ans[i]){
                    a++;
                }
            }
            if(allZero){
                break;
            }
            for(int i = 1; i<=9; i++){
                int a1=0,a2=0;
                for(int j = 0; j<n; j++){
                    if(ans[j]==i){
                        a1++;
                    }
                    if(guess[j]==i){
                        a2++;
                    }
                }
                b += min(a1,a2);
            }
            cout << "    (" << a << "," << b-a << ")" << endl;
        }
    }
    return 0;
}