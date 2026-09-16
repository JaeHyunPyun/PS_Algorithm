#include <iostream>

using namespace std;

int n, m;
int arr[100][100]={0,};

int dr[4] = {0, 1, 0, -1};
int dc[4] = {1, 0, -1, 0};

bool IsBoundary(int r, int c){
    return r < 0 || r > m-1 || c < 0 || c > n-1;
}

int main() {
    cin >> m >> n;

    int r=0;
    int c=0;
    int dir=0;

    arr[r][c] = 1;

    for(int i=2; i<=n*m; i++){
        int nr = r + dr[dir];
        int nc = c + dc[dir];

        if(IsBoundary(nr,nc) || arr[nr][nc]!=0){
            dir = (dir+1)%4;
        }

        r += dr[dir];
        c += dc[dir];

        arr[r][c] = i;
    }

    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }


    return 0;
}