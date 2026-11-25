// Count the factors: 只要找出能整除n的因數i，就除光（while (n % i == 0) n /= i)，最後n>1要cnt++
//也可以簡單判斷整除n的i是不是質數
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    while(cin >> n && n!=0){
        int ori = n;
        int cnt = 0;
        for(int i = 2; i * i<=n; i++){
            if(n%i==0) {
                cnt++;
                while(n%i==0){
                    n /= i;
                }
            }
        }
        if(n>1){
            cnt++;
        }
        cout << ori << " : " << cnt << '\n';
    }
    return 0;
}