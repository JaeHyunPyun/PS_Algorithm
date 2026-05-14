#include <iostream>
using namespace std;

int daysOfMonth[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {
    int m1, d1, m2, d2;

    cin >> m1 >> d1 >> m2 >> d2;

    int cnt = 0;

    for (int i = m1 + 1; i < m2; i++){
        cnt += daysOfMonth[i];
    }

    if(m1 != m2){
        cnt += daysOfMonth[m1]  - d1 + d2 + 1;
    } else {
        cnt += d2 - d1 + 1;
    }

    
    cout << cnt;

    return 0;
}