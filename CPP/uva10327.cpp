// Flip Sort: 算氣泡排序交換次數，外層i:0~n-1-1, 內層j:0~n-1-i-1
#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    while(cin >> n){
        int cnt = 0;
        vector<int> v(n);
        for(int i = 0; i<n; i++){
            cin >> v[i];
        }
        for(int i = 0; i<n-1; i++){
            for(int j = 0; j<n-1-i; j++){
                if(v[j]>v[j+1]){
                    swap(v[j],v[j+1]);
                    cnt++;
                }
            }
        }
        cout << "Minimum exchange operations : " << cnt << endl;
    }
    return 0;
}