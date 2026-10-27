#include <iostream>
#include <string>

using namespace std;

string A;

int main() {
    cin >> A;

    int ans = 0;
    int string_length = A.length();

    for (int i = 0; i < string_length ; i++){
        for (int j = i+1; j < string_length ; j++){
            if(A[i] == '(' && A[j] == ')'){
                ans++;
            }
        }
    }

    cout << ans;

    return 0;
}