#include <iostream>
using namespace std;

#define MAX_N 55

int N;
int arr[MAX_N];

void GetAbstractValue(int *arr){
    for(int i = 0; i < N; i++){
        if(arr[i] < 0) arr[i] = -arr[i];
    }

}

int main() {
    cin >> N;

    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }

    GetAbstractValue(arr);

    for(int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }


    return 0;
}