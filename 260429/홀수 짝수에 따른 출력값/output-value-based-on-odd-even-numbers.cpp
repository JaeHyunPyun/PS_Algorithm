#include <iostream>
using namespace std;

int ConditionalAdd(int N){
    if (N == 1) return 1;
    if (N == 2) return 2;

    return ConditionalAdd(N-2) + N;
}

int main() {

    int N;
    cin >> N;
    cout << ConditionalAdd(N);

    return 0;
}