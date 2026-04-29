#include <iostream>

using namespace std;

int n;
int arr[100];
int MAX;

void FindMax(int arr[], int idx, int N){
    if(idx == N) return;

    if(arr[idx] > MAX) MAX = arr[idx];

    FindMax(arr, idx+1, N);
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    FindMax(arr, 0, n);

    cout << MAX;

    return 0;
}