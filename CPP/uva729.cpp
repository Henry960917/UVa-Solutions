// The Hamming Distance Problem: n-h個0，h個1，然後do while 用next_permutation
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i = 0; i<t; i++){
        if(i>0){
            cout << '\n';
        }
        int n,h;
        cin >> n >> h;
        string s(n - h, '0');
        s.append(h, '1');
        do{
            cout << s << '\n';
        }
        while (next_permutation(s.begin(), s.end()));

    }
    return 0;
}