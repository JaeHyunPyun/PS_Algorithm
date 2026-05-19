#include <iostream>
#include <algorithm>

#define MAX_N 105

using namespace std;

int period[MAX_N];

int main() {
    
    int N;
    cin >> N;

    for(int i=0; i<N; i++){
        int s, e;   
        cin >> s >> e;

        for(int j=s; j<=e; j++){
            period[j]++;
        }
    }

    int ans = 0;

    for(int i=0; i<MAX_N; i++){
        ans = max(ans, period[i]);
    }

    cout << ans;

    return 0;
}