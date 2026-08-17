#include <iostream>
#define MAX_V_T_SIZE 1005
#define MAX_DURATION 1000005

using namespace std;

int V_A[MAX_V_T_SIZE], T_A[MAX_V_T_SIZE];
int V_B[MAX_V_T_SIZE], T_B[MAX_V_T_SIZE];

int LOC_A[MAX_DURATION], LOC_B[MAX_DURATION];

int UpdateLocation(int iter_count, int* loc_arr, int* time_arr, int* velocity_arr){
    int ticker = 1;

    for(int i=0; i<iter_count; i++){
        for(int j=0; j<time_arr[i]; j++){
            loc_arr[ticker] = loc_arr[ticker-1] + velocity_arr[i];
            ticker++;
        }
    }
    
    return ticker;
}

int main() {
    
    int n,m;

    cin >> n >> m;

    for(int i=0; i<n; i++){
        cin >> V_A[i] >> T_A[i];
    }

    for(int i=0; i<m; i++){
        cin >> V_B[i] >> T_B[i];
    }

    int ticker = UpdateLocation(n, LOC_A, T_A, V_A);

    ticker = UpdateLocation(m, LOC_B, T_B, V_B);


    int head_change_count = 0;

    int prev_diff = 1;

    // diff 초기화
    for(int i=0; i <ticker; i++){ 
        int curr_diff = LOC_A[i] - LOC_B[i];  

        if(curr_diff==0) continue;

        if(head_change_count<1){
            prev_diff = curr_diff;
            break;
        }
    }

    for(int i=0; i <ticker; i++){
        int curr_diff = LOC_A[i] - LOC_B[i];

        if(curr_diff==0) continue;

        long long diff_multiple = (long long)prev_diff * curr_diff;

        if (diff_multiple < 0) {
            head_change_count++;
            prev_diff = curr_diff;
        }
    }

    cout << head_change_count; 


    return 0;
}