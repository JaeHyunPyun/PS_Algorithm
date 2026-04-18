#include <iostream>

using namespace std;

int n, m;
int arr[100];

int AddFromTo(int a1, int a2){
    int sum = 0;
    for(int i = a1 ; i <= a2 ; i++){
        sum += arr[i];
    }
    return sum;
}

int main() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < m; i++) {
        int a1, a2;
        cin >> a1 >> a2;
        cout << AddFromTo(a1-1, a2-1) << "\n";
    }



    return 0;
}