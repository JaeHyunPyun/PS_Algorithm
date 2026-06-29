#include <iostream>

#define MAX_NUM 2010

using namespace std;

int x1[3], y1[3];
int x2[3], y2[3];

int checked[MAX_NUM][MAX_NUM];

int main() {
    cin >> x1[0] >> y1[0] >> x2[0] >> y2[0];   // A
    cin >> x1[1] >> y1[1] >> x2[1] >> y2[1];   // B
    cin >> x1[2] >> y1[2] >> x2[2] >> y2[2];   // M

    for(int i=0; i<3; i++){
        x1[i] = x1[i] + 1000;
        y1[i] = y1[i] + 1000;
        x2[i] = x2[i] + 1000;
        y2[i] = y2[i] + 1000;
    }

    for(int i=x1[0]; i<x2[0]; i++){
        for(int j=y1[0]; j<y2[0]; j++){
            checked[i][j]++;
        }
    }

    for(int i=x1[1]; i<x2[1]; i++){
        for(int j=y1[1]; j<y2[1]; j++){
            checked[i][j]++;
        }
    }
    
    for(int i=x1[2]; i<x2[2]; i++){
        for(int j=y1[2]; j<y2[2]; j++){
            checked[i][j]--;
        }
    }
    
    int uncovered = 0;
    for(int i=0; i<MAX_NUM; i++){
        for(int j=0; j<MAX_NUM; j++){
            if(checked[i][j]>0) uncovered++;
        }
    }

    cout << uncovered;

    return 0;
}