#include <iostream>

using namespace std;

int n;
int grid[100][100];

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};


bool InRange(int x, int y){
    int max_x = 0;
    int max_y = n-1;
    return (x>=max_x && x<=max_y) && (y>=max_x && y<=max_y);
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int adj_one_cnt = 0;
            
            for(int k=0; k<4; k++){
                int nx = i-dx[k];
                int ny = j-dy[k];

                if(InRange(nx, ny) && grid[nx][ny]==1){
                    adj_one_cnt++;
                }
            }

            if(adj_one_cnt>=3){
                ans++;
            }
           
        }
    }

    cout << ans;

    return 0;
}