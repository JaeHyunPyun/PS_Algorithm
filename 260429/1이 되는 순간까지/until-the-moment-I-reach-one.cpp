#include <iostream>
using namespace std;


int cnt;

void DivideByTwoOrThree(int N){
    if(N==1) return;

    int quotient = 1;
    if(N%2==0){
        quotient = N/2;
    } else {
        quotient = N/3;
    }
    cnt++;

    DivideByTwoOrThree(quotient);
}

int main() {
    
    int N;
    cin >> N;
    DivideByTwoOrThree(N);

    cout << cnt;

    return 0;
}