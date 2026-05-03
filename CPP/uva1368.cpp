#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    for(int i = 0; i<t; i++){
        int m,n;
        cin >> m >> n;
        vector<string> s(m);
        string ans;
        int d = 0;
        for(int j = 0; j<m; j++){
            cin >> s[j];
        }
        for(int j = 0; j<n; j++){
            vector<int> cnt(4, 0);
            for(int k = 0; k<m; k++){
                if(s[k][j]=='A'){
                    cnt[0]++;
                }
                else if(s[k][j]=='C'){
                    cnt[1]++;
                }
                else if(s[k][j]=='G'){
                    cnt[2]++;
                }
                else if(s[k][j]=='T'){
                    cnt[3]++;
                }
            }
            int mx = 0;
            int idx = 0;
            char dna[]={'A', 'C', 'G', 'T'};
            for(int k = 0; k<4; k++){
                if(cnt[k]>mx){
                    mx = cnt[k];
                    idx = k;
                }
            }
            ans+=dna[idx];
            d += m-mx;
        }
        cout << ans << endl;
        cout << d << endl;
    }
    return 0;
}