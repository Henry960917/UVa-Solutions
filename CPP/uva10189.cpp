// Minesweeper: 八方向，記得不要越界(0<=ni && ni<n && 0<=nj && nj<m)，cnt轉char再放到ans裡
#include <iostream>
#include <vector>
using namespace std;

int dx[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
int dy[8] = {-1, 0, 1, 1, 1, 0, -1, -1};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n, m;
    int cases = 1;
    while(cin >> n >> m){
        if(n==0 && m==0){
            break;
        }
        cout << "Field #" << cases++ << ":" << '\n';
        vector<vector<char>> v(n, vector<char>(m));
        vector<vector<char>> ans(n, vector<char>(m));
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                cin >> v[i][j];
            }
        }
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                if(v[i][j]=='*'){
                    ans[i][j] = '*';
                }
                else{
                    int cnt = 0;
                    for(int d = 0; d<8; d++){
                        int ni = i+dx[d];
                        int nj = j+dy[d];
                        if(0<=ni && ni<n && 0<=nj && nj<m){
                            if(v[ni][nj]=='*'){
                                cnt++;
                            }
                        }
                    }
                    ans[i][j] = char(cnt+'0');
                }
            }
        }
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                cout << ans[i][j];
            }
            cout << '\n';
        }
    }
    return 0;
}