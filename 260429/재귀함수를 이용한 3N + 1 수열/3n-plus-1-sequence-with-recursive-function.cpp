#include <iostream>

using namespace std;

int n;

int CountOp(int N){
    if(N==1) return 0;

    if(N%2==0) return CountOp(N/2) + 1;
    else return CountOp(N*3+1) + 1;
}



int main() {
    cin >> n;
    cout << CountOp(n);

    return 0;
}