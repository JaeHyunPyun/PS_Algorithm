#include <iostream>
#include <algorithm>

#define MAX_N 1005

using namespace std;

int arr1[MAX_N];
int check[MAX_N];

int main() {
    
    int N;
    int idx = 0;
    cin >> N;

    while(N--){
        cin >> arr1[idx];
        idx++;
    }

    int check_idx=0;
    for(int i=0; i<idx; i++){
        if(i==0 || arr1[i] != arr1[i-1]){
            check[check_idx]=i;
            check_idx++;
        }
    }
    
    int max_cnt = 0;

    for(int i=0; i<check_idx; i++){
        int cnt=1;
        for(int j=check[i]; arr1[j]==arr1[j+1]; j++){
            cnt++;
        }
        max_cnt = max(max_cnt,cnt);
    }

    cout << max_cnt;

    return 0;
}