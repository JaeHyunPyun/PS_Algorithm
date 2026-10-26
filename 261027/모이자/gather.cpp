#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int n;
int A[100];

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    int min_idx = 0;
    int min_dist_sum = INT_MAX;

    for (int i = 1; i <= n; i++){
        int curr_sum = 0;
        for(int j = 1; j <= n; j++){
            if(j==i){
                continue;
            }
            curr_sum += abs(j-i) * A[j-1]; 
        }
        if(curr_sum < min_dist_sum) {
            min_idx = i;
            min_dist_sum = curr_sum;
        }
    }

    cout << min_dist_sum;

    return 0;
}