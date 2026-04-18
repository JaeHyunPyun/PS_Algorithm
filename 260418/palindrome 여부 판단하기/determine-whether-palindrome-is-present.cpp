#include <iostream>
#include <string>
using namespace std;

bool IsPalindrome(string &s){
    int n = s.length() -1;
    int mid = n/2;
    for(int i = 0; i <= mid; i++){
        if(s[i] != s[n-i]) return false;
    }
    return true;
}

int main() {
    
    string s;
    cin >> s;

    bool palindrome_check = IsPalindrome(s);    

    if(palindrome_check == true){
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}