#include <iostream>
#define MAX_N 205
#define OFFSET 100

using namespace std;

int plane[MAX_N][MAX_N];

int main() {

    int N;
    cin >> N;

    for(int i=0; i<N; i++){
        
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
    
        x1=x1+OFFSET;
        y1=y1+OFFSET;
        x2=x2+OFFSET;
        y2=y2+OFFSET;

        for(int j=x1; j<x2; j++){
            for(int k=y1; k<y2; k++){
                if(i%2==0){
                    plane[j][k] = 1;   // 빨간색
                } else {
                    plane[j][k] = 2;   // 파란색
                }
                
            }
        }
    }

    int size = 0;
    for(int i=0; i<MAX_N; i++){
        for(int j=0; j<MAX_N; j++){
            if(plane[i][j]==2) size++;
        }
    }

    cout << size;

    return 0;
}