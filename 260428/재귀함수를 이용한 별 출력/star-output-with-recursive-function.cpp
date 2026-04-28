#include <iostream>
using namespace std;

void PrintStars(int N){
    if(N==0) return;
    
    PrintStars(N-1);

    for(int i = 0; i < N; i++){
        cout << "*";
    }
    cout << "\n";
}

int main() {
    
    int N;
    
    cin >> N;

    PrintStars(N);

    return 0;
}