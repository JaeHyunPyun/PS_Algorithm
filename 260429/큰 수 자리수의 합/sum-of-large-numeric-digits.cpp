#include <iostream>

using namespace std;

int a, b, c;

int SumDigits(int N){
    if(N<10) return N;

    return SumDigits(N/10) + N%10;
}

int main() {
    cin >> a >> b >> c;

    cout << SumDigits(a*b*c);

    return 0;
}