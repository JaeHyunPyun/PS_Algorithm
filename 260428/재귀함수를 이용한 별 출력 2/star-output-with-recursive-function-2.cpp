#include <iostream>
using namespace std;

void PrintReversedStars(int N);
void PrintCurrentLine(int N);

void PrintReversedStars(int N){
    if(N==0) return;

    PrintCurrentLine(N);
    PrintReversedStars(N-1);
    PrintCurrentLine(N);
}

void PrintCurrentLine(int N){
    for(int i = 0; i < N; i++){
        cout << "*" << " ";
    }
    cout << "\n";
}

int main() {
    
    int N;
    cin >> N;
    PrintReversedStars(N);

    return 0;
}