#include <iostream>
#include <string>

using namespace std;

string A;

bool HasDistinctAlphabet(string &s){
    char first_alpha = s[0];

    for(int i = 1; i < s.length(); i++){
        if(s[i] != first_alpha){
            return true;
        }
    }

    return false;
}

int main() {
    cin >> A;

    bool check = HasDistinctAlphabet(A);

    if(check == true){
        cout << "Yes"; 
    } else {
        cout << "No";
    }


    return 0;
}