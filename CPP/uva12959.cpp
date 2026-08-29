#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int j,r;
    while(cin >> j >> r && j!=0 && r!=0){
        vector<int> v(j);
        for(int i = 0; i<j*r; i++){
            int tmp;
            cin >> tmp;
            v[i%j]+=tmp;
        }
        int mx = -1, mx_index = -1;
        for(int i = 0; i<v.size(); i++){
            if(v[i]>=mx){
                mx = v[i];
                mx_index = i+1;
            }
        }
        cout << mx_index << endl;
    }
    return 0;
}