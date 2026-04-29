#include <iostream>
#include <algorithm>

using namespace std;

int n;
int arr[100];

int FindMax(int idx){
    if(idx == 0) return arr[0];

    return max(FindMax(idx-1), arr[idx]);
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << FindMax(n-1);

    return 0;
}