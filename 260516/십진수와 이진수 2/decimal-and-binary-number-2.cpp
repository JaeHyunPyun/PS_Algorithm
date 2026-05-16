#include <iostream>
#include <string>

using namespace std;

int binary[20];

int main() {
    
    string s;
    cin >> s;

    int num = 0;
    int idx = 0;

    for(int i = 0; i < s.length(); i++){
        num = num * 2 + (s[idx++]-'0');
    }

    num *= 17;

    int idx2 = 0;

    while(true){
        if(num < 2){
            binary[idx2++] = num;    
            break;
        }

        binary[idx2++] = num % 2;
        num /= 2;
    }

    for (int i = idx2-1; i>=0; i--){
        cout << binary[i];
    }

    return 0;
}