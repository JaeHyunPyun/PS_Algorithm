#include <iostream>
#include <string>

using namespace std;

int daysOfMonth[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
string date[7] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

int calculateDuration(int m, int d){
    int cnt = 0;

    for(int i=1; i<m; i++){
        cnt += daysOfMonth[i];
    }

    cnt += d;

    return cnt;
}

string calculateDate(int diff){

    if(diff >= 0){
        return date[diff % 7];
    } 

    // diff 음수인 경우
    while(diff < 0){
        diff += 7;
    }

    return date[diff];
}

int main() {

    int m1, d1, m2, d2;
    
    cin >> m1 >> d1 >> m2 >> d2;

    int difference = calculateDuration(m2, d2) - calculateDuration(m1, d1);

    string date = calculateDate(difference);

    cout << date;

    return 0;
}