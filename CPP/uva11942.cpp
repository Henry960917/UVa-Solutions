// Lumberjack Sequencing: tmp原陣列，v順排序逆排序後去檢查就好
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    cout << "Lumberjacks:" << "\n";
    for(int i = 0; i<n; i++){
        vector<int> v(10);
        vector<int> tmp(10);
        bool check = false;
        for(int j = 0; j<10; j++){
            cin >> v[j];
            tmp[j] = v[j];
        }
        sort(v.begin(), v.end());
        if(v==tmp){
            check = true;
        }
        sort(v.rbegin(), v.rend());
        if(v==tmp){
            check = true;
        }
        if(check){
            cout << "Ordered" << "\n";
        }
        else{
            cout << "Unordered" << "\n";
        }
    }
    return 0;
}