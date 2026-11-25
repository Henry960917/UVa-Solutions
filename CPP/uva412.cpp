// Pi: 總對數為n(n-1)/2，用輾轉相除法gcd，然後如果1就coprime++，移項得到sqrt(6.0*totalPairs/coPrime)
#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>
using namespace std;

int gcd(int a, int b){
    while(b!=0){
        int tmp = a%b;
        a = b;
        b = tmp;
    }
    return a;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    while(cin >> n && n!=0){
        vector<int> v(n);
        for(int i = 0; i<n; i++){
            cin >> v[i];
        }
        int totalPairs = (n*(n-1))/2;
        int coPrime = 0;
        for(int i = 0; i<n; i++){
            for(int j = i+1; j<n; j++){
                if(gcd(v[i], v[j])==1){
                    coPrime++;
                }
            }
        }
        if(coPrime==0){
            cout << "No estimate for this data set." << endl;
        }
        else{
            cout << fixed << setprecision(6) << sqrt(6.0*totalPairs/coPrime) << endl;
        }
    }
    return 0;
}