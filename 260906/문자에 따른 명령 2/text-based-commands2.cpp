#include <iostream>

using namespace std;

int dx[4]={1,0,-1,0};
int dy[4]={0,-1,0,1};

string dirs;

int main() {
    cin >> dirs;

    int cur_x = 0;
    int cur_y = 0;

    int idx = 0;
    
    int dir_num = 3;

    while(dirs[idx]!='\0'){
        if(dirs[idx]=='L'){
            dir_num = (dir_num - 1 + 4) % 4;
        } else if (dirs[idx]=='R'){
            dir_num = (dir_num + 1) % 4;
        } else {
            cur_x += dx[dir_num];
            cur_y += dy[dir_num];
        }
        idx++;
    }

    cout << cur_x << " " << cur_y;


    return 0;
}