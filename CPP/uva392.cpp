#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    vector<int> v(9);
    while(cin >> v[0]){
        for(int i = 1; i<9; i++){
            cin >> v[i];
        }
        string ans = "";
        bool start = true;
        for(int i = 0; i<9; i++){
            if(v[i]==0){
                continue;
            }
            if(start){
                if(v[i]<0){
                    ans+="-";
                }
                start = false;
            }
            else{
                if(v[i]>0){
                    ans+="+ ";
                }
                else{
                    ans+="- ";
                }
            }

            if(abs(v[i])!=1||8-i==0){
                ans+=to_string(abs(v[i]));
            }

            if(8-i==1){
                ans+="x";
            }
            else if(8-i>1){
                ans+="x^"+to_string(8-i);
            }
            ans+=" ";
        }
        if (!ans.empty() && ans[ans.size()-1]==' ') {
            ans.pop_back();
        }
        if(ans.empty()){
            ans = '0';
        }
        cout << ans << endl;
    }
    return 0;
}