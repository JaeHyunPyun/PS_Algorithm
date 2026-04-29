#include <iostream>
using namespace std;

int Pivonacci(int N){
    if(N==1) return 1;
    if(N==2) return 1;

    return Pivonacci(N-1) + Pivonacci(N-2);
}

int main() {
    
    int N;
    cin >> N;
    cout << Pivonacci(N);

    return 0;
}