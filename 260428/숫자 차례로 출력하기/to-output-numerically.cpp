#include <iostream>
using namespace std;

void printAsc(int N){
    if (N == 0) return;
    printAsc(N-1);
    cout << N << " ";
}

void printDesc(int N){
    if (N == 0) return;
    cout << N << " ";
    printDesc(N-1);
}

int main() {

    int N; 
    
    cin >> N;
    
    printAsc(N);
    
    cout << "\n";
    
    printDesc(N);

    return 0;
}