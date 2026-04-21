#include <iostream>
using namespace std;

int N;

void PrintStar(int n){
    if(n==0){
        return;
    }

    PrintStar(n-1);
    cout << "HelloWorld" << "\n";
}

int main() {
    cin >> N;

    PrintStar(N);

    return 0;
}