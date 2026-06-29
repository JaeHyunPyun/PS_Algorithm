#include <iostream>
#define MAX_NUM 200

using namespace std;

int plane[MAX_NUM+10][MAX_NUM+10];

int main() {
    
    int N;
    cin >> N;

    while(N--){
        int x1, y1, x2, y2;

        cin >> x1 >> y1 >> x2 >> y2;

        x1 += 100;
        y1 += 100;
        x2 += 100;
        y2 += 100;

        for(int i=x1; i<x2; i++){
            for(int j=y1; j<y2; j++){
                plane[i][j]++;
            }
        }
    }

    int size = 0;
    for(int i=0; i<MAX_NUM+10; i++){
        for(int j=0; j<MAX_NUM+10; j++){
            if(plane[i][j] > 0){
                size++;
            }
        }
    }
    
    cout << size;

    return 0;
}