#include <iostream>
using namespace std;

int N;
int K = 1;

void PrintNRect(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << K << " ";
            if(K == 9){
                K = 1;
            } else {
                K++;
            }
        }
        cout << "\n";
    }
}



int main() {
    cin >> N;
    PrintNRect(N);

    return 0;
}