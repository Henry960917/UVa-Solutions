//開個map作為狀態紀錄，開始時將答案字母存入並設為-1，若猜中就設為1，沒中就是2。用count()看此字是否處理過。
#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int x;
    string ans, guess;
    while(cin >> x && x!=-1){
        cin >> ans >> guess;
        map<char, int> m;
        int target = 0, wrong=0, cnt=0;
        string s = "You chickened out.";
        for(int i = 0; i<ans.size(); i++){
            m[ans[i]] = -1;
        }
        for(map<char,int>::iterator it=m.begin(); it!=m.end(); it++){
            if(it->second == -1){
                target++;
            }
        }
        for(int i = 0; i<guess.size(); i++){
            if(m.count(guess[i])>0){
                if(m[guess[i]]==-1){
                    m[guess[i]]=1;
                    cnt++;
                }
            }
            else{
                wrong++;
                m[guess[i]]=2;
            }
            if(cnt==target){
                s = "You win.";
                break;
            }
            if(wrong>=7){
                s = "You lose.";
                break;
            }
            
        }
        cout << "Round " << x << endl;
        cout << s << endl;
    }
    return 0;
}