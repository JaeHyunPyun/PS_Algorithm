#include <iostream>
using namespace std;


int Factorial(int N){
    if(N < 2) return 1;
    return Factorial(N-1) * N;
}

int main() {

    int N;
    cin >> N;
    cout << Factorial(N);

    return 0;
}