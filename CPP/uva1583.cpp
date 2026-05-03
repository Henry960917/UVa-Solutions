#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> ans(100065, 0);
    for(int i = 1; i<=100002; i++){
        int a = i, b = i;
        while(b>0){
            a+=b%10;
            b/=10;
        }
        if(ans[a]==0 || i<ans[a]){
            ans[a]=i;
        }
    }
    for(int i = 0; i<n; i++){
        int num;
        cin >> num;
        cout << ans[num] << endl;
    }
    return 0;
}