#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string IsIdentical(string s1, string s2){
    if(s1.length()!=s2.length()) return "No";

    for(int i=0; i<s1.length(); i++){
        if(s1[i]!=s2[i]) return "No";
    }

    return "Yes";
}

int main() {

    string s1;
    string s2;

    cin >> s1 >> s2;

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    cout << IsIdentical(s1, s2);

    return 0;
}