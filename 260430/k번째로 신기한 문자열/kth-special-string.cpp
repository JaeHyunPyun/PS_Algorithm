#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

#define MAX_N 105

int N;
int K;
string T;
string words[105];

bool startsWith(string s, string prefix){
    for(int i=0; i<prefix.length(); i++){
        if(s[i]!=prefix[i]) return false;
    }
    return true;
}

int findFirstIndex(){
    for(int i=0; i<N; i++){
        if(startsWith(words[i], T)) return i;
    }
    return -1;
}

int main() {
    
    cin >> N >> K >> T;
    
    for(int i=0; i<N; i++){
        cin >> words[i];
    }

    sort(words, words+N);

    cout << words[findFirstIndex()+K-1];

    return 0;
}