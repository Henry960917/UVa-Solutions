#include <iostream>
#include <queue>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    while(cin >> n, n){
        queue<int> q;
        vector<int> v;
        for(int i = 1; i<=n; i++){
            q.push(i);
        }
        while(q.size()>=2){
            v.push_back(q.front());
            q.pop();
            int tmp = q.front();
            q.push(tmp);
            q.pop();
        }
        cout << "Discarded cards:";
        if(!v.empty()){
            cout << " ";
            for(int i = 0; i<v.size(); i++){
                cout << v[i];
                if(i!=v.size()-1){
                    cout << ", ";
                }
            }
        }
        cout << endl;
        cout << "Remaining card: " << q.front() << endl;
    }
    return 0;
}