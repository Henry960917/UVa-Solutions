//可以用二分搜
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,q;
    int rnd = 1;
    while(cin >> n >> q &&n!=0&&q!=0){
        vector<int> v(n);
        for(int i = 0; i<n; i++){
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        cout << "CASE# " << rnd++ << ":" << endl;
        for(int i = 0; i<q; i++){
            int tmp;
            cin >> tmp;
            int l=0, r=n-1, ans = -1;
            while(l<=r){
                int m  = (l+r)/2;
                if(v[m]==tmp){
                    ans = m+1;
                    r=m-1;
                }
                else if(v[m]>tmp){
                    r = m -1;
                }
                else{
                    l = m + 1;
                }
            }
            if(ans!=-1){
                cout << tmp << " found at " << ans << endl;
            }
            else{
                cout << tmp << " not found" << endl;
            }
        }
    }
    return 0;
}