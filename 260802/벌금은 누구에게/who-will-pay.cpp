#include <iostream>

using namespace std;

int N, M, K;
int student[101];

int main() {
    cin >> N >> M >> K;

    bool found = false;

    for (int i = 0; i < M; i++) {
        int idx;
        cin >> idx;
        student[idx]++;

        for (int i = 1; i <= 100; i++) {
            if(student[i]>=K){
                cout << i;
                found = true;
                return 0;
            }
        }
    }

    if(found == false){
        cout << -1;
    }

    return 0;
}