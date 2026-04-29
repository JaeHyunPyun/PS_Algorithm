#include <iostream>
#include <algorithm>

using namespace std;

int n;
int arr[10];

int FindGcd(int a, int b){
    int gcd = 0;

    for(int i = 1; i <= max(a,b) ; i++){
        if(a % i == 0 && b % i ==0) {
            gcd = i;
        }
    }

    return gcd;
}

int FindLcm(int idx){
    if(idx==0) return arr[idx];

    int prev = FindLcm(idx-1);
    
    return arr[idx] * prev / FindGcd(arr[idx], prev);

}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << FindLcm(n-1);

    return 0;
}