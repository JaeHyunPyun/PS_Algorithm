#include <iostream>
using namespace std;

int calculateDuration(int d, int h, int m){
    int cnt = 0;

    cnt += (d-11) * 24 * 60 + h * 60 + m;
    
    return cnt;
}

int main() {
    
    int base = calculateDuration(11, 11, 11);

    int d, h, m;

    cin >> d >> h >> m;

    int cmp = calculateDuration(d, h, m);

    if(cmp < base){
        cout << -1 ;
    } else {
        cout << cmp - base;
    }

    return 0;
}