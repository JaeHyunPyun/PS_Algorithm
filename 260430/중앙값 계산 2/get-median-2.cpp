#include <iostream>
#include <algorithm>

using namespace std;

#define MAX_N 105

int arr[MAX_N];

int main() {
    
    int N;
    cin >> N;

    for(int i=0; i<N; i++){
        cin >> arr[i];

        if(i%2==0){
            sort(arr, arr+i+1);
            cout << arr[i/2] << " ";
        }
    }

    return 0;
}