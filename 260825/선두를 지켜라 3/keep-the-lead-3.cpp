#include <iostream>
#define MAX_TIME 1000005

using namespace std;

int N, M;
int v[1000], t[1000];
int v2[1000], t2[1000];

int LOC_A[MAX_TIME], LOC_B[MAX_TIME];

int main() {
    cin >> N >> M;

    for (int i = 0; i < N; i++) {
        cin >> v[i] >> t[i];
    }

    for (int i = 0; i < M; i++) {
        cin >> v2[i] >> t2[i];
    }
    
    int a_time = 1;

    for (int i = 0; i < N; i++){
        for(int j = 0; j < t[i]; j++){
            LOC_A[a_time] = LOC_A[a_time-1] + v[i];
            a_time++; 
        }
    }

    int b_time = 1;

    for (int i = 0; i < M; i++){
        for(int j = 0; j < t2[i]; j++){
            LOC_B[b_time] = LOC_B[b_time-1] + v2[i];
            b_time++; 
        }
    }


    int cnt = 0;
    long long prev_diff = 0;
    for(int i = 1; i < b_time; i++){
        long long curr_diff = LOC_A[i]-LOC_B[i];
        if(prev_diff != curr_diff && prev_diff * curr_diff <= 0) {
            cnt++;
        }
        prev_diff = curr_diff;
    }

    cout << cnt;
    return 0;
}