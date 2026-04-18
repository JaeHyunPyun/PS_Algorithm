#include <iostream>
#include <algorithm>

using namespace std;

int n, m;

void PrintGcd(int n, int m){
    int gcd = 1;
    
    for(int i = 1 ; i <= min(n,m); i++){
        if(n%i == 0 && m%i == 0){
            gcd = i;
        }
    }

    cout << gcd;
}

int main() {
    cin >> n >> m;

    PrintGcd(n, m);

    return 0;
}