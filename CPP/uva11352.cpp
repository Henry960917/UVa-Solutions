// 處理危險區域，用queue八方向BFS，visited避免重複走訪
#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;

int horse_dr[8] = {-2, -2, -1, -1, 1, 1, 2, 2};
int horse_dc[8] = {-1, 1, -2, 2, -2, 2, -1, 1};
int king_dr[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int king_dc[8] = {-1, 0, 1, -1, 1, -1, 0, 1};

struct Node{
    int r;
    int c;
    int dis;
};

int main(){
    ios_base::sync_with_stdio(false);
    int t;
    cin >> t;
    for(int i = 0; i<t; i++){
        int startR = -1, startC = -1, endR = -1, endC = -1;
        int m, n;
        cin >> m >> n;
        vector<string> grid(m);
        for(int j = 0; j<m; j++){
            cin >> grid[j];
            for(int k = 0; k<n; k++){
                if(grid[j][k]=='A'){
                    startR = j, startC = k;
                }
                else if(grid[j][k]=='B'){
                    endR = j, endC = k;
                }
            }
        }
        // 攻擊範圍
        for(int j = 0; j<m; j++){
            for(int k = 0; k<n; k++){
                if(grid[j][k]=='Z'){
                    for(int d = 0; d<8; d++){
                        int nr = j+horse_dr[d];
                        int nc = k+horse_dc[d];
                        if(nr>=0 && nr<m && nc>=0 && nc<n){
                            if(grid[nr][nc]=='.'){
                                grid[nr][nc] = 'X';
                            }
                        }
                    }
                }
            }
        }
        // 從A開始BFS
        queue<Node> q;
        vector<vector<bool>> visited(m, vector<bool>(n, false));
        visited[startR][startC] = true;
        q.push({startR, startC, 0});
        bool reached = false;

        while(!q.empty()){ // 當佇列中仍有節點時持續搜尋
            Node curr = q.front(); // 取出佇列最前端（目前步數最小）的節點
            q.pop(); // 將已取出的節點移出佇列
            if(curr.r == endR && curr.c == endC){
                cout << "Minimal possible length of a trip is " << curr.dis << endl;
                reached = true;
                break;
            }
            for (int d = 0; d < 8; ++d) {
                int nr = curr.r + king_dr[d]; // 下一步
                int nc = curr.c + king_dc[d];

                if(nr>=0 && nr<m && nc >= 0 && nc<n && !visited[nr][nc]){
                    // 只能走安全的空地 '.' 或是終點 'B'
                    if (grid[nr][nc] == '.' || grid[nr][nc] == 'B') {
                        visited[nr][nc] = true;
                        q.push({nr, nc, curr.dis + 1});
                    }
                }
            }
        }
        if(!reached){
            cout << "King Peter, you can't go now!" << endl;
        }
    }
    return 0;
}