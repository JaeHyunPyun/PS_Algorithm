#include <iostream>
using namespace std;


int result[1005];

int main() {

    int N, B;
    cin >> N >> B;

    int idx = 0;

    while(true){
        if(N < B){
            result[idx++] = N;
            break;
        }

        result[idx++] = N % B;
        N /= B;
    }

    for (int i = idx - 1; i >=0; i--){
        cout << result[i];
    }

    return 0;
}