#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    double v1,v2,d1,d2;
    int num = 1;
    while(cin >> v1 >> d1 >> v2 >> d2 && v1!=0 && d1!=0 && v2!=0 && d2!=0){
        cout << "Case #" << num++ << ": ";
        if(d1/v1<d2/v2){
            cout << "You owe me a beer!" << endl;
        }
        else{
            cout << "No beer for the captain." << endl;
        }
    }
    return 0;
}