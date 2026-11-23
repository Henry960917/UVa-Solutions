// Rockabye Tobby: 存藥名、吃藥週期、這顆藥下次要吃的時間，設第0顆藥最先吃(best = 0)，nextT[j] < nextT[best]的話best = j
#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    vector<string> medName(3005);
    vector<int> periT(3005);
    vector<int> nextT(3005);
    for(int ii = 0; ii<t; ii++){
        int n, k;
        cin >> n >> k;
        for(int i = 0; i<n; i++){
            cin >> medName[i] >> periT[i];
            nextT[i] = periT[i];
        }
        for(int i = 0; i<k; i++){
            int best = 0;
            for(int j = 1; j<n; j++){
                if(nextT[j] < nextT[best]){
                    best = j;
                }
            }
            cout << nextT[best] << " " << medName[best] << endl;
            nextT[best] += periT[best];
        }
    }
    return 0;
}