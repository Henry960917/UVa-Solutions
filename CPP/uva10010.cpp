// Where’s Waldorf: 用vector<string>存表，一樣八方向，全部先轉小寫再找，越界、v[nx][ny] != word[idx]就break
#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int dx[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
int dy[8] = {-1, 0, 1, 1, 1, 0, -1, -1};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    for(int ii = 0; ii<t; ii++){
        int m, n;
        cin >> m >> n;
        vector<string> v(m);
        for(int i = 0; i<m; i++){
            cin >> v[i];
            for(int j = 0; j<n; j++){
                v[i][j] = tolower(v[i][j]);
            }
        }
        int k;
        cin >> k;
        for(int i = 0; i<k; i++){
            string word;
            cin >> word;
            for(int j = 0; j<word.size(); j++){
                word[j] = tolower(word[j]);
            }
            bool found = false;
            for (int x = 0; x < m && !found; x++){
                for (int y = 0; y < n && !found; y++){
                    if (v[x][y]==word[0]){
                        for (int d = 0; d < 8; ++d){
                            int nx = x, ny = y;
                            int idx;
                            for(idx = 1; idx<word.size(); idx++){
                                nx += dx[d];
                                ny += dy[d];
                                if(nx < 0 || nx >= m || ny < 0 || ny >= n){
                                    break;
                                }
                                if(v[nx][ny] != word[idx]){
                                    break;
                                }
                            }
                            if(idx==word.size()){
                                cout << x + 1 << " " << y + 1 << '\n';
                                found = true;
                                break;
                            }
                        }
                    }
                }
            }
        }
        cout << endl;
    }
    return 0;
}