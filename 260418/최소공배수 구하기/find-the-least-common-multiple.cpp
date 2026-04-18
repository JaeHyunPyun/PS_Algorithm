#include <iostream>

using namespace std;

int n, m;

int findGcd(int n, int m){
    int gcd = 1;

    for(int i = 1; i <= min(n,m); i++){
        if(n%i == 0 && m%i == 0){
            gcd = i;
        }
    }

    return gcd;
}

void printLcm(int n, int m){

    int gcd = findGcd(n,m);

    int n_remainder = n / gcd;
    int m_remainder = m / gcd;

    cout << gcd * n_remainder * m_remainder;
}


int main() {
    cin >> n >> m;

    printLcm(n, m);

    return 0;
}