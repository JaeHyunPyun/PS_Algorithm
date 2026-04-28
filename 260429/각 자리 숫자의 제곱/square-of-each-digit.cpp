#include <iostream>
using namespace std;

int SumSquareNumber(int N){
    if(N < 10) return N*N;

    int residue = N%10;

    return SumSquareNumber(N/10) + residue*residue;
}

int main() {
    
    int N;
    cin >> N;
    cout << SumSquareNumber(N);

    return 0;
}