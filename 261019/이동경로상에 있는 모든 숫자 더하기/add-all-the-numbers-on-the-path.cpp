#include <iostream>
#include <string>

using namespace std;

int N, T;
string str;
int board[100][100];

int dr[4] = {-1, 0, 1, 0};
int dc[4] = {0, 1, 0, -1};

int rotate(char cmd, int dir){
    if (cmd=='L'){
        return ((dir-1)+4)%4;   
    } else if (cmd=='R'){
        return (dir+1)%4;
    }
}

bool is_out_of_boundary (int r, int c){
    return r < 0 || r > N-1 || c<0 || c > N-1;
}

int main() {
    cin >> N >> T;
    cin >> str;

    int curr_r = N/2;
    int curr_c = N/2;   
    int dir = 0;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> board[i][j];
        }
    }

    int sum = board[curr_r][curr_c];


    for (int i=0; i<str.size(); i++){
        if(str[i]=='F'){
            int next_r = curr_r + dr[dir];
            int next_c = curr_c + dc[dir];
            if (!is_out_of_boundary(next_r, next_c)){
                curr_r = next_r;
                curr_c = next_c;
                sum += board[curr_r][curr_c];
            }
        } else {
            dir = rotate(str[i], dir);
        }
    }

    cout << sum;
    
    return 0;
}