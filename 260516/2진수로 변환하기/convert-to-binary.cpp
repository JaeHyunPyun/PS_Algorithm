#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;

    int idx = 0;
    int digit[20] = {0, };

    while (true) {
        if(n < 2){
            digit[idx++] = n;
            break;
        }

        digit[idx++] = n % 2;
        n/=2;
    }

    for(int i = idx-1; i>=0; i--){
        cout << digit[i];
    }

    return 0;
}