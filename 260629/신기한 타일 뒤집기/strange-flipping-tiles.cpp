#include <iostream>
#define MAX_NUM 250000

using namespace std;

int tile_arr[MAX_NUM];

int move(int curr, int mv, char dir){

    if(dir=='R'){
        for(int i = curr; i<curr+mv; i++){
            tile_arr[i] = 1;
        }
        return curr+mv-1;
    } else {
        for(int i = curr; i>curr-mv; i--){
            tile_arr[i] = -1;
        }
        return curr-mv+1;
    }
}

int main() {
    // Please write your code here.

    int curr = MAX_NUM/2;
    int N;
    cin >> N;

    for(int i=0; i<N; i++){
        int mv;
        char dir;

        cin >> mv >> dir;
        curr = move(curr, mv, dir);
    }
    
    int black, white = 0;
    
    for(int i=0; i<MAX_NUM; i++){
        if(tile_arr[i]==1){
            black++;
        } else if (tile_arr[i]==-1){
            white++;
        }
    }

    cout << white << " " << black;


    return 0;
}