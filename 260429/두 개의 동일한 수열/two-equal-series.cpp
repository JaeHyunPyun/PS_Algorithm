#include <iostream>
#include<algorithm>
#include <string>

using namespace std;

#define MAX_N 105

int N;
int numA[MAX_N];
int numB[MAX_N];

string IsIdentical(){
    for(int i=0; i<N; i++){
        if(numA[i]!=numB[i]) return "No";
    }
    return "Yes";
}

int main() {
    
    cin >> N;

    for(int j=0; j<2; j++){
        for(int i=0; i<N; i++){
            if(j==0){
                cin >> numA[i];
            } else {
                cin >> numB[i];           
            }
        }
    }

    sort(numA, numA+N);

    sort(numB, numB+N);

    cout << IsIdentical();

    return 0;
}