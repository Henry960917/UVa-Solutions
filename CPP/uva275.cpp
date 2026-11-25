// Expanding Fractions: 模擬直式，開一個v存餘數0~n-1出現前算了幾位小數(ans.size()-1)，repeated是循環節((ans.size()-1)-v[r])
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int m,n;
    while(cin >> m >> n){
        if(m==0&&n==0){
            break;
        }
        if(n==0){
            break;
        }
        int r = m%n, repeated=0;// 循環節
        vector<int> v(1100, -1); // 餘數0~n-1出現前算了幾位小數
        v[r] = 0;
        string ans = ".";
        while(true){
            r*=10;
            ans+= char((r/n)+'0');
            r%=n;
            if(r==0){ // 整除
                repeated = 0;
                break;
            }
            if(v[r]!=-1){
                repeated = (ans.size()-1)-v[r]; //目前總小數位數-r上次出現時已算了幾位(現在位置-上次同r的位置)
                break;
            }
            v[r] = ans.size()-1;
        }
        for(int i = 0; i<ans.size(); i+=50){
            cout << ans.substr(i,50) << "\n";
        }
        if(repeated == 0){
            cout << "This expansion terminates.\n";
        }
        else{
            cout << "The last " << repeated << " digits repeat forever.\n";
        }
    }
    return 0;
}