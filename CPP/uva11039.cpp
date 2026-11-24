// Building designing: 按絕對值大小排序(保留正負) sort( , , cmp) cmp會return abs(x)<abs(y)
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

bool cmp(int x, int y){
    return abs(x)<abs(y);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int p;
    cin >> p;
    for(int i = 0; i<p; i++){
        int n;
        cin >> n;
        int cnt1=0, cnt2=0;
        vector<int> v(n);
        vector<int> nega;
        for(int j = 0; j<n; j++){
            cin >> v[j];
        }
        sort(v.begin(), v.end(), cmp);
        
        bool needNega = false;
        bool needPosi = true;
        for(int j = 0; j<n; j++){
            if(needPosi){
                if(v[j]>0){
                    needNega = true;
                    needPosi = false;
                    cnt1++;
                }
            }
            if(needNega){
                if(v[j]<0){
                    needPosi = true;
                    needNega = false;
                    cnt1++;
                }
            }
        }

        bool needNega2 = true;
        bool needPosi2 = false;
        for(int j = 0; j<n; j++){
            if(needPosi2){
                if(v[j]>0){
                    needNega2 = true;
                    needPosi2 = false;
                    cnt2++;
                }
            }
            if(needNega2){
                if(v[j]<0){
                    needPosi2 = true;
                    needNega2 = false;
                    cnt2++;
                }
            }
        }
        cout << max(cnt1, cnt2) << "\n";
    }
    return 0;
}