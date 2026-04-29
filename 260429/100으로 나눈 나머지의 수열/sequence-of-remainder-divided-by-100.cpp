#include <iostream>
using namespace std;

int GetNthElement(int N){
    if(N == 1) return 2;
    if(N == 2) return 4;

    return GetNthElement(N-1) * GetNthElement(N-2) % 100;
}

int main() {

    int N;
    cin >> N;
    cout << GetNthElement(N);

    return 0;
}