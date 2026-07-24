#include <iostream>
#include <algorithm>

#define MAX_ARRAY_SIZE 1000

using namespace std;

int array1[MAX_ARRAY_SIZE];

int main() {
    int n;
    int cursor = 0;
    int max_cnt = 0;

    cin >> n;

    for (int i=0; i<n; i++){
        cin >> array1[cursor++];
    }

    int cnt = 1;
    for (int i=0; i<n; i++){
        if(i!=0 && array1[i]>array1[i-1]){
            cnt++;
        } else {
            cnt = 1;
        }        
        max_cnt = max(cnt, max_cnt);
    }


    cout << max_cnt;

    return 0;
}