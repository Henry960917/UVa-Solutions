// Shopaholic: 陣列倒著排，送最便宜的，所以j從2~n-1每次+3
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    for(int i = 0; i<t; i++){
        int n;
        cin >> n;
        int free = 0;
        vector<int> v(n);
        for(int j = 0; j<n; j++){
            cin >> v[j];
        }
        sort(v.rbegin(), v.rend());
        for(int j = 2; j<n; j+=3){
            free+=v[j];
        }
        cout << free << endl;
    } 
    return 0;
}