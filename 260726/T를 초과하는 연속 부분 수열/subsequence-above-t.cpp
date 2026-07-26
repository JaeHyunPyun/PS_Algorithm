#include <iostream>
#include <algorithm>
#define MAX_ARRAY_SIZE 1000

using namespace std;

int input[MAX_ARRAY_SIZE];

int main() {
    int n, t;
    int max_size = 0;
    cin >> n >> t;

    for(int i=0; i<n; i++){
        cin >> input[i];
    }

    int curr_size = 0;
    for(int i=0; i<n; i++){
        if(input[i]> t){
            curr_size++;
        }
        else {
            curr_size = 0;
        }

        max_size = max(curr_size, max_size);
    }
    cout << max_size;
        
    return 0;
}