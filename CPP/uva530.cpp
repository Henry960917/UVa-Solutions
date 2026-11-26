// Binomial Showdown: for(int i = 1; i<=m; i++){ans = ans*(n-m+i)/i;} 邊乘邊除!!
#include <iostream>
#include <vector>
#include <algorithm>
#define int long long
using namespace std;

signed main(){
    int n, m;
    while(cin >> n >> m){
        if(n==0 && m==0){
            break;
        }
        if(m>n-m){
            m = n-m; // C(n,m) = C(n, n-m);
        }
        int ans = 1;
        for(int i = 1; i<=m; i++){
            ans = ans*(n-m+i)/i;
        }
        cout << ans << '\n';
    }
    return 0;
}