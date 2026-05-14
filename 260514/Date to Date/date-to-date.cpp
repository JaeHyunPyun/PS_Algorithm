#include <iostream>
using namespace std;

int daysOfMonth[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int countDays(int m, int d){
    int count = 0;

    for(int i = 1; i < m; i++){
        count += daysOfMonth[i];
    }

    count += d;

    return count;
}

int main() {
    int m1, d1, m2, d2;

    cin >> m1 >> d1 >> m2 >> d2;

    int firstDays = countDays(m1, d1);
    int secondDays = countDays(m2, d2);
        
    cout << secondDays - firstDays + 1;

    return 0;
}