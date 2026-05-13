//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n;
vector<vector<int>> v;

void findPos(int x, int &r, int&c){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<v[i].size(); j++){
            if(v[i][j]==x){
                r = i;
                c = j;
                return;
            }
        }
    }
}

void clean(int r, int c){
    while(v[r].size()>c+1){
        int tmp = v[r].back();
        v[tmp].push_back(tmp);
        v[r].pop_back();
    }
}

void pile(int rA, int cA, int rB){
    vector<int> tmp;
    for(int i = cA; i<v[rA].size(); i++){
        tmp.push_back(v[rA][i]);
    }
    v[rA].resize(cA);
    for(int i = 0; i<tmp.size(); i++){
        v[rB].push_back(tmp[i]);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cin >> n;
    v.assign(n, vector<int>());
    for (int i = 0; i < n; i++) {
        v[i].push_back(i);
    }
    string s1, s2;
    int a,b;
    while(cin >> s1 && s1!="quit"){
        cin >> a >> s2 >> b;
        int rA,cA,rB,cB;
        findPos(a, rA, cA);
        findPos(b, rB, cB);
        if(rA==rB){
            continue;
        }
        if(s1=="move"){
            clean(rA,cA);
        }
        if(s2=="onto"){
            clean(rB,cB);
        }
        pile(rA,cA,rB);
        for(int i = 0; i<n; i++){
            cout << i << ": "
            for(int j = 0; j<v[i].size(); j++){
                cout << v[i][j] << " ";
            }
        }
    }
    return 0;
}