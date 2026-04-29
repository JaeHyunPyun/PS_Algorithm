#include <iostream>
#include <algorithm>

using namespace std;

#define MAX_N 1005

int N, K;
int arr[MAX_N];

int main() {
    
    cin >> N >> K;

    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }

    sort(arr, arr+N);

    cout << arr[K-1];

    return 0;
}