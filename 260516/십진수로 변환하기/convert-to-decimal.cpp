#include <iostream>
using namespace std;

int binary[8];

int main() {

    int input;

    cin >> input;

    int idx = 0;
    while(true){
        if(input < 10){
            binary[idx++] = input;
            break;
        }

        binary[idx++] = input % 10;
        input /= 10;
    }

    int num = 0;

    for(int i=idx-1; i>=0; i--){
        num = num * 2 + binary[i];
    }

    cout << num;

    return 0;
}