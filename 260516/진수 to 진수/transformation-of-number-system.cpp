#include <iostream>
#include <string>

using namespace std;

int result[30];

int main() {
    int A, B;
    string N;

    cin >> A >> B >> N;

    // A진수 -> 10진수
    long long num = 0;

    for(int i=0; i<N.size(); i++){
        num = num * A + (N[i]-'0');
    }

    // 10진수 -> B진수
    int idx = 0;

    while(true){
        if(num < B){
            result[idx++] = num;    
            break;
        }

        result[idx++] = num % B;
        num /= B;
    }

    for(int i = idx-1; i>=0; i--){
        cout << result[i];
    }

    return 0;
}