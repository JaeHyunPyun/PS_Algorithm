#include <iostream>
#include <string>

using namespace std;

int GetTargetIndex(string &input, string &target){
    for(int i = 0; i <input.length(); i++){
        if(input[i] == target[0] && i+target.length() <= input.length()){
            bool found = true;
            for(int j = 0; j <target.length(); j++){
                if(input[i+j] != target[j]){
                    found = false;
                    break;
                }
            }
            if(found) return i;
        }
    }
    return -1;
}

int main() {
    string input;
    string target;

    cin >> input >> target;

    cout << GetTargetIndex(input, target);
    
    return 0;
}