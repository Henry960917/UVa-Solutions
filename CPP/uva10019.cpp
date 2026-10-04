#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0; i<n; i++){
        int m;
        int b1=0, b2=0;
        cin >> m;
        int tmp1 = m;
        int tmp2 = m;
        while(tmp1>0){
            if(tmp1%2==1){
                b1++;
            }
            tmp1/=2;
        }
        while(tmp2>0){
            int digit = tmp2%10;
            int d = digit;
            while(d>0){
                if(d%2==1){
                    b2++;
                }
                d/=2;
            }
            tmp2/=10;
        }
        cout << b1 << " " << b2 << endl;
    }
    return 0;
}