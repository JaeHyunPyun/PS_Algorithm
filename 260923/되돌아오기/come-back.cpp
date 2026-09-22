#include <iostream>
#define ASCII_COUNT 128

using namespace std;

int N;
char dir[100];
int dist[100];
int mapper[ASCII_COUNT];

int dr[4] = {0, 1, 0, -1};
int dc[4] = {1, 0, -1, 0};


int main() {
    cin >> N;

    bool is_arrived = 0;

    // origin init
    int curr_r = 0;
    int curr_c = 0;

    // mapper init
    mapper['E'] = 0;
    mapper['S'] = 1;
    mapper['W'] = 2;
    mapper['N'] = 3;

    for (int i = 0; i < N; i++) {
        cin >> dir[i] >> dist[i];
    }

    int time = 0;

    for (int i = 0; i < N; i++) {

        for (int j = 0; j < dist[i]; j++){
            time++;

            int dir_int = mapper[dir[i]];

            curr_r += dr[dir_int];
            curr_c += dc[dir_int];
    
            if(curr_r==0 && curr_c==0){
                is_arrived = 1;
                cout << time;
                break;
            }
        }

        if(is_arrived){
            break;
        }

    }

    if(!is_arrived){
        cout << -1;
    }


    return 0;
}