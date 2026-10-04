#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

vector<string> month{"January", "February", "March", "April", "May", "June",
"July", "August", "September", "October", "November", "December"};

vector<int> days{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool isLeap(int y){
    return (y%4==0&&y%100!=0)||(y%400==0);
}

int findDays(int y, int m){
    if(m==2&&isLeap(y)){
        return 29;
    }
    return days[m];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    int cnt = 0;
    for(int i = 0; i<t; i++){
        string s;
        int k;
        cin >> s >> k;
        int fir=0, sec=0;
        bool isFirst = true;
        for(int j = 0; j<s.size(); j++){
            if(s[j]=='-' && isFirst==true){
                fir = j;
                isFirst = false;
            }
            else if(s[j]=='-' && isFirst==false){
                sec = j;
            }
        }
        int yyyy = stoi(s.substr(0, 4));
        string mm = s.substr(5, sec-fir-1);
        int mm_int;
        for(int i = 0; i<month.size(); i++){
            if(month[i]==mm){
                mm_int = i+1;
            }
        }
        int dd = stoi(s.substr(sec+1, 2));
        dd+=k;
        while(dd>findDays(yyyy, mm_int)){
            dd-=findDays(yyyy, mm_int);
            mm_int++;
            if(mm_int>12){
                mm_int = 1;
                yyyy++;
            }
        }
        cout << "Case " << ++cnt << ": " << yyyy << "-" << month[mm_int-1] << 
        "-" << setfill('0') << setw(2) << dd << endl;
    }
    return 0;
}