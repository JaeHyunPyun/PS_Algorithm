#include <iostream>
#include <string>

using namespace std;

string commands;

int dr[4] = {-1, 0, 1, 0};
int dc[4] = {0, 1, 0, -1};

int main() {
    cin >> commands;

    int time = 0;
    int idx = 0;
    int dir = 0;
    int curr_r = 0;
    int curr_c = 0;
    bool found = false;

    for(int idx=0; idx < commands.size(); idx++){
        
        time++;

        char command = commands[idx];

        if(command == 'L'){
            dir = ((dir-1) + 4) % 4;
        } else if (command == 'R'){
            dir = (dir+1) % 4;
        } else {
            curr_r += dr[dir];
            curr_c += dc[dir];
        }

        if(curr_r==0 && curr_c ==0){
            found = true;
            break;
        }
    }

    if(found){
        cout << time;
    } else {
        cout << -1;
    }
    

    return 0;
}