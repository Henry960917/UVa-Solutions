#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    while(cin >> n >> m && n!=0 && m!=0){
        cout << n << " " << m << "\n";
        map<int, vector<int>> remainder;
        for(int i = 0; i<n; i++){
            int tmp;
            cin >> tmp;
            remainder[tmp%m].push_back(tmp);
        }
        for(auto& i: remainder){
            vector<int> cur = i.second;
            vector<int> odd, even;
            for(int j = 0; j<cur.size(); j++){
                if(abs(cur[j]%2)==1){
                    odd.push_back(cur[j]);
                }
                else if(abs(cur[j]%2)==0){
                    even.push_back(cur[j]);
                }
            }
            sort(odd.rbegin(), odd.rend());
            sort(even.begin(), even.end());
            for(int i = 0; i<odd.size(); i++){
                cout << odd[i] << "\n";
            }
             for(int i = 0; i<even.size(); i++){
                cout << even[i] << "\n";
            }
        }
    }
    cout << "0 0" << "\n";
    return 0;
}