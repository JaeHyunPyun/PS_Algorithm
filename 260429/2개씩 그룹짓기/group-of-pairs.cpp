#include <iostream>
#include <algorithm>

#define MAX_N 1005

using namespace std;

int N;
int arr[MAX_N];

int GetGroupMax(){
    int maxSum = 0;
    for(int i=0; i<N; i++){
        int curSum = arr[i] + arr[N-1-i];
        if(curSum>maxSum) maxSum = curSum;
    }
    return maxSum;
}

int main() {
    int groupCnt;
    cin >> groupCnt;
    N = groupCnt * 2;

    for(int i=0; i<N; i++){
        cin >> arr[i];
    }

    sort(arr, arr+N);

    cout << GetGroupMax();

    return 0;
}