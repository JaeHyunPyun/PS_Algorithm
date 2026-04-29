#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

#define MAX_N 105

int n;
int arr[MAX_N];

void PrintArr(){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout <<"\n";
}

int main() {

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sort(arr, arr+n);    
    PrintArr();
    sort(arr, arr+n, greater<int>());    
    PrintArr();

    return 0;
}