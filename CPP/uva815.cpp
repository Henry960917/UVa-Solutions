//先把海拔高度降成一維陣列，注意到需要的水量應為(h[後項]-h[前項])*覆蓋多少區域*100，再判斷水量夠不夠填到下一階。
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int m,n;
    int rgn = 1;
    while(cin >> m >> n && (m!=0||n!=0)){
        double water;
        vector<int> h(m*n);
        for(int i = 0; i<m*n; i++){
            cin >> h[i];
        }
        double needed = 0;
        cin >> water;
        sort(h.begin(), h.end());
        double nowH = 0;
        int cover = 1;
        for(cover = 1; cover<m*n; cover++){
            needed = double(h[cover]-h[cover-1])*cover*100;
            if(water>needed){
                water-=needed;
            }
            else{
                break;
            }
        }
        nowH = h[cover-1] + water/(cover*100.0);
        cout << "Region " << rgn << endl;
        rgn++;
        cout << "Water level is " << fixed << setprecision(2) << nowH << " meters." << endl;
        cout << fixed << setprecision(2) << (double)cover*100.0/(m*n) << " percent of the region is under water." << endl;
        cout << endl;
    }
    return 0;
}