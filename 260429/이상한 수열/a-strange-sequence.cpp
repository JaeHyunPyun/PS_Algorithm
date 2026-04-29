#include <iostream>

using namespace std;

int N;

int GetNthElement(int N){
    if(N==1) return 1;
    if(N==2) return 2;

    return GetNthElement(N/3) + GetNthElement(N-1);
}

int main() {
    cin >> N;

    cout << GetNthElement(N);

    return 0;
}