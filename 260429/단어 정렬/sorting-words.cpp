#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

#define MAX_N 105

string words[MAX_N];

int main() {
    
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> words[i];
    }

    sort(words, words+n);

    for(int i = 0; i < n; i++){
        cout << words[i] << "\n";
    }

    return 0;
}