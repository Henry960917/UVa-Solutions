// Simply Subsets:用getline讀整行再ss讀num，inter變數算交集個數，外層range-based x遍遞A，B.count(x)就inter++
#include <iostream>
#include <set>
#include <sstream>
using namespace std;

set<int> strToSet(string s){
    stringstream ss(s);
    int num;
    set<int> tmp;
    while(ss >> num){
        tmp.insert(num);
    }
    return tmp;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s1, s2;
    while(getline(cin, s1) && getline(cin, s2)){
        set<int> A = strToSet(s1);
        set<int> B = strToSet(s2);
        int inter = 0;
        for(int x: A){
            if(B.count(x)){
                inter++;
            }
        }
        if(A.size()==B.size() && inter == A.size()){
            cout << "A equals B" << endl;
        }
        else if(inter == A.size() && A.size() < B.size()){
            cout << "A is a proper subset of B" << endl;
        }
        else if (inter == B.size() && A.size() > B.size()) {
            cout << "B is a proper subset of A" << endl;
        } 
        else if(inter==0){
            cout << "A and B are disjoint" << endl;
        }
        else{
            cout << "I'm confused!" << endl;
        }
    }
    return 0;
}