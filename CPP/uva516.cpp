// Prime Land: 從 2 往上試除完成質因數分解，再由後往前輸出。開頭用getline(cin, s)，再用ss，先看是不是0再輸入完
#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    string s;
    while(getline(cin, s)){
        if(s.empty()){
            continue;
        }
        stringstream ss(s);
        int x, y;
        ss >> x;
        if(x==0){
            break;
        }
        ss >> y;
        int num = 1;
        for(int i = 0; i<y; i++){
            num*=x;
        }
        while(ss >> x >> y){
            for(int i = 0; i<y; i++){
                num*=x;
            }
        }
        num--;
        vector<int> ans;
        for(int i = 2; i<=num; i++){
            if(num%i==0){
                int cnt = 0;
                while(num%i==0){
                    num/=i;
                    cnt++;
                }
                ans.push_back(i);
                ans.push_back(cnt);
            }
        }
        for(int i = ans.size()-2; i>=0; i-=2){
            cout << ans[i] << " " << ans[i+1];
            if(i!=0){
                cout << " ";
            } 
        }
        cout << '\n';
    }
    return 0;
}