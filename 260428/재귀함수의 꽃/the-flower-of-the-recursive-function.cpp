#include <iostream>

using namespace std;

int N;

void PrintNumberIdentical(int N){
    if(N==0) return;

    cout << N << " ";

    PrintNumberIdentical(N-1);

    cout << N << " ";
}

int main() {
    cin >> N;

    PrintNumberIdentical(N);

    return 0;
}