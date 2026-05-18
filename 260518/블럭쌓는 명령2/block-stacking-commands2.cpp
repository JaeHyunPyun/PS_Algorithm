#include <iostream>
#include <algorithm>

using namespace std;

#define MAX_N 101

int bucket[MAX_N];

int main() {

    int N, K;

    cin >> N >> K;

    int minA = 105;
    int maxB = 0;
    int ans = 0;

    for(int i=0; i<K; i++){
        int A,B;
        cin >> A >> B;

        minA = min(minA, A);
        maxB = max(maxB, B);

        for(int i = A; i<=B; i++){
            bucket[i] += 1;
        }
    }

    for(int i=minA; i<=maxB; i++){
        ans = max(ans, bucket[i]);
    }

    cout << ans;

    return 0;
}