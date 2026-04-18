#include <iostream>
using namespace std;


int N;
int arr[105];

void DivideEvenBy2(int *arr){
    for(int i = 0; i < N; i++){
        if(arr[i]%2 == 0){
            arr[i] = arr[i]/2;
        }
    }
}

int main() {

    cin >> N;
    
    for(int i = 0; i< N; i++){
        cin >> arr[i];
    }

    DivideEvenBy2(arr);

    for(int i = 0; i< N; i++){
        cout << arr[i] << " ";
    }

    return 0;
}