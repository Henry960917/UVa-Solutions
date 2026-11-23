// Parentheses Balance: 用stack跟bool check 然後"( or ["就push，") or ]"如果空然後頂端不是( 就check = false
#include <iostream>
#include <stack>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    string s;
    getline(cin,s);
    for(int i = 0; i<n; i++){
        getline(cin, s);
        stack<char> st;
        bool check = true;
        for(int j = 0; j<s.size(); j++){
            if(s[j]=='(' || s[j]=='['){
                st.push(s[j]);
            }
            else if(s[j]==')'){
                if(st.empty() || st.top()!='('){
                    check = false;
                    break;
                }
                else{
                    st.pop();
                }
            }
            else if(s[j]==']'){
                if(st.empty() || st.top()!='['){
                    check = false;
                    break;
                }
                else{
                    st.pop();
                }
            }
        }
        if(!check || !st.empty()){
            cout << "No" << endl;
        }
        else{
            cout << "Yes" << endl;
        }
    }
    return 0;
}