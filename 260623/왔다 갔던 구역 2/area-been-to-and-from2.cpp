#include <iostream>

#define MAX_N 2010

using namespace std;

int arr[MAX_N];

int move(int cur, int mv, char dir){
    if(dir=='L'){
        for(int i=cur-1; i>=cur-mv; i--){
            arr[i]+=1;
        }
        return cur-mv;
    } else {
        for(int i=cur; i<cur+mv; i++){
            arr[i]+=1;
        }
        return cur+mv;
    }
}

int main() {

    int n;
    int cur= 1005;
    int cnt = 0;

    cin >> n;

    for(int i=0; i<n; i++){
        int mv;
        char dir;
        cin >> mv >> dir;

        // cout << "mv : " << mv << " " << "dir : " << dir << "\n";
        cur = move(cur, mv, dir);
    }

    for(int i=0; i<MAX_N; i++){
        if(arr[i]>1) cnt++;
    }

    cout << cnt;

    return 0;
}