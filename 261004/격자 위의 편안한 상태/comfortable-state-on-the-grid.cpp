#include <iostream>
#define MAX_N 105

using namespace std;

int N, M;
int r[10000], c[10000];
int colored[MAX_N][MAX_N];
int dr[4] = {1, 0, -1, 0};
int dc[4] = {0, 1, 0, -1};

bool is_out_of_boundary (int r, int c) {
    return r < 0 || r > N-1 || c < 0 || c > N-1;  
}


int main() {
    cin >> N >> M;

    for (int i = 0; i < M; i++) {
        cin >> r[i] >> c[i];
    }

    for (int i = 0; i < M; i++) {
        int curr_r = r[i] - 1;
        int curr_c = c[i] - 1;

        if(is_out_of_boundary(curr_r, curr_c)) continue;

        colored[curr_r][curr_c] += 1;

        int adj_cnt = 0;
        
        for (int j = 0; j < 4; j++){
            int next_r = curr_r + dr[j];
            int next_c = curr_c + dc[j];

            if(is_out_of_boundary(next_r, next_c)) continue;
            if(colored[next_r][next_c]>0) adj_cnt++;
        }

        if (adj_cnt == 3) cout << 1 << "\n";
        else cout << 0 << "\n";
    }

    return 0;
}