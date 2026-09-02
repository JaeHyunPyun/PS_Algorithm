#include <iostream>

using namespace std;

int n;
char dir[100];
int dist[100];
//  W S N E
int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> dir[i] >> dist[i];
    }

    int curr_x = 0;
    int curr_y = 0;

    for(int i=0; i<n; i++){
        if(dir[i]=='W'){
            curr_x = curr_x + dx[0]*dist[i];
            curr_y = curr_y + dy[0]*dist[i];
        }
        else if(dir[i]=='S'){
            curr_x = curr_x + dx[1]*dist[i];
            curr_y = curr_y + dy[1]*dist[i];
        }
        else if(dir[i]=='N'){
            curr_x = curr_x + dx[2]*dist[i];
            curr_y = curr_y + dy[2]*dist[i];
        }
        else if(dir[i]=='E'){
            curr_x = curr_x + dx[3]*dist[i];
            curr_y = curr_y + dy[3]*dist[i];
        }
    }

    cout << curr_x << " " << curr_y;

    return 0;
}