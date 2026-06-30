#include <iostream>
#define MAX_N 210

using namespace std;

int plane[MAX_N][MAX_N];
int L = 8;


int main() {
    
    int N;

    cin >> N;

    while(N--){
        int x, y;

        cin >> x >> y;

        x=x+100;
        y=y+100;

        for(int i=x; i<x+L; i++){
            for(int j=y; j<y+L; j++){
                plane[i][j]++;
            }
        }
    }

    int cnt=0;

    for(int i=0; i<MAX_N; i++){
        for(int j=0; j<MAX_N; j++){
            if(plane[i][j]>0) cnt++; 
        }
    }

    cout << cnt;

    return 0;
}