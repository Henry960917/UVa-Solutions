// Alternate Task: 外層i:0~1000(可能的數字)，內層j:1~i(因數)，紀錄mx
#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int s;
    int cases = 1;
    while(cin >> s && s!=0){
        int mx = -1;
        cout << "Case " << cases++ << ": ";
        for(int i = 1; i<=1000; i++){
            int sum = 0;
            for(int j = 1; j<=i; j++){
                if(i%j==0){
                    sum+=j;
                }
            }
            if(sum==s){
                mx = max(mx, i);
            }
        }
        cout << mx << '\n';
    }
    return 0;
}