#include <iostream>
#include <algorithm>
#define MAX_N 2001

using namespace std;

int plane[MAX_N][MAX_N];

int main() {

    for(int i=0; i<2; i++){

        int x1, y1, x2, y2;

        cin >> x1 >> y1 >> x2 >> y2;

        x1+=1000;
        y1+=1000;
        x2+=1000;
        y2+=1000;

        if(i==0){
            for(int j=x1; j<x2; j++){
                for(int k=y1; k<y2; k++){
                    plane[j][k]++;
                }
            }
        } else {
            for(int j=x1; j<x2; j++){
                for(int k=y1; k<y2; k++){
                    if(plane[j][k]>0) plane[j][k]++;
                }
            }
        }
    }

    int max_x = 0;
    int max_y = 0;
    int min_x = 2100; 
    int min_y = 2100;

    int one_cnt = 0;
    
    for(int i=0; i<MAX_N; i++){
        for(int j=0; j<MAX_N; j++){
            if(plane[i][j]==1){
                one_cnt++;
                max_x = max(max_x, i);
                min_x = min(min_x, i);
                max_y = max(max_y, j);
                min_y = min(min_y, j);
            }
        }
    }
    
    if(one_cnt>0){
        int x_length = max_x-min_x+1;
        int y_length = max_y-min_y+1;
        cout << x_length * y_length;
    } else {
        cout << 0;
    }
    

    return 0;
}