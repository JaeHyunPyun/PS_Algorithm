#include <iostream>
#include <algorithm>

using namespace std;

int arr[1000];

int main() {
    
    int N;
    int max_length = 0;
    
    cin >> N;

    for (int i=0; i<N; i++){
        cin >> arr[i];
    }

    int curr_length = 1;
    for(int i=0; i<N; i++){

        if(i==0 || arr[i]*arr[i-1]<0){
            max_length = max(max_length, curr_length);
            curr_length = 1;
        } else {
            curr_length++;

            if(i==N-1){
                max_length = max(max_length, curr_length);
            }
        }

    }

    cout << max_length;

    return 0;
}