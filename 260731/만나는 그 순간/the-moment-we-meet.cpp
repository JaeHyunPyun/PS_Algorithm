#include <iostream>
#include <algorithm>
#define MAX_ARRAY_SIZE 1000000

int a_loc[MAX_ARRAY_SIZE];
int b_loc[MAX_ARRAY_SIZE];

int a_cursor = 1;
int b_cursor = 1;

using namespace std;

void moveToDirection(char dir, int mv, int *loc, int &cursor){
    for(int i=0; i<mv;i++){
        if(dir == 'R'){
            loc[cursor] = loc[cursor-1]+1;
        } else {
            loc[cursor] = loc[cursor-1]-1;
        }
        cursor++;
    }
}


int main() {
    int n, m;
    cin >> n >> m;

    for(int i=0; i<n; i++){
        char dir;
        int mv;
        cin >> dir >> mv;
        moveToDirection(dir, mv, a_loc, a_cursor);
    }

    for(int i=0; i<m; i++){
        char dir;
        int mv;
        cin >> dir >> mv;
        moveToDirection(dir, mv, b_loc, b_cursor);
    }

    for(int i=0; i<a_cursor; i++){
        if(i!=0 && (a_loc[i] == b_loc[i])){
            cout << i;
            return 0;
        } 
    }

    cout << -1;

    return 0;
}