#include <iostream>
#include <algorithm>

#define MAX_TIME_SIZE 2000005

using namespace std;

int LOC_A[MAX_TIME_SIZE], LOC_B[MAX_TIME_SIZE], DIFF[MAX_TIME_SIZE];

void move(int &timer, int time, char dir, int *LOC){
    for(int j=0; j<time; j++){
        if(dir=='L'){
            LOC[timer] = LOC[timer-1]-1;
        } else {
            LOC[timer] = LOC[timer-1]+1;
        }
        timer++;
    }
}

int main() {
    
    int n, m;

    cin >> n >> m;

    int a_timer = 1;

    for(int i=0; i<n; i++){
        int t;
        char d;

        cin >> t >> d;

        move(a_timer, t, d, LOC_A);
    }


    int b_timer = 1;
    for(int i=0; i<m; i++){
        int t;
        char d;

        cin >> t >> d;

        move(b_timer, t, d, LOC_B);
    }


    int cnt = 0;
    for(int i=0; i < max(a_timer, b_timer); i++){

        int a_value, b_value = 0;

        if(i>=a_timer) a_value = LOC_A[a_timer-1];
        else a_value = LOC_A[i];
        
        if(i>=b_timer) b_value = LOC_B[b_timer-1];
        else b_value = LOC_B[i];

        DIFF[i] = a_value - b_value;
        
        if(i!=0 && DIFF[i-1]!=0 && DIFF[i]==0) cnt++;
    }

    cout << cnt;

    return 0;
} 