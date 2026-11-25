// Zapping: 兩種走法:直接走(abs(b-a))、繞(100-max(a,b)+min(a,b))
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int a,b;
    while(cin >> a >> b){
        if(a==-1&&b==-1){
            break;
        }
        int ans = abs(b-a);
        int c;
        c = (100-max(a,b))+min(a,b);
        cout << min(c, ans) << '\n';
    }
    return 0;
}