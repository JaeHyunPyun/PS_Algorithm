#include <iostream>
#define MAX_NUM 250000

using namespace std;

int w_cnt[MAX_NUM];
int b_cnt[MAX_NUM];
int color[MAX_NUM];


int Move(int curr, int x, char dir){
    if(dir=='L'){
        for(int i=curr; i>curr-x; i--){
            if(w_cnt[i]>=2 && b_cnt[i]>=2) continue;

            w_cnt[i]++;

            color[i] = -1;
        }
        return curr - x + 1;
    } else {
        for(int i=curr; i<curr+x; i++){
            if(w_cnt[i]>=2 && b_cnt[i]>=2) continue;

            b_cnt[i]++;

            color[i] = 1;
        }
        return curr + x - 1;
    }
}

int main() {

    int curr = MAX_NUM/2;
    int N;
    cin >> N;

    for(int i=0; i<N; i++){
        int x;
        char dir;

        cin >> x >> dir;

        curr = Move(curr, x, dir);
    }

    // count
    int white = 0;
    int black = 0;
    int grey = 0;

    for(int i=0; i<MAX_NUM; i++){
        if(w_cnt[i]>=2 && b_cnt[i]>=2) grey++;
        else {
            if(color[i]==1) black++;
            else if(color[i]==-1) white++;
        }
    }

    cout << white << " " << black << " " << grey; 

    return 0;
}