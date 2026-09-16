#include <iostream>

using namespace std;

int n, t;
int r, c;
char d;

int dr[4] = {-1, 0, 0, 1};   
int dc[4] = {0, 1, -1, 0};     

bool IsBoundary(int r, int c, int dir){
    r += dr[dir];
    c += dc[dir];

    return r < 1 || r > n || c < 1 || c > n;
}

int GetDir(char d){
    if(d=='U'){
        return 0;
    } else if (d=='D'){
        return 3;
    } else if (d=='R'){
        return 1;
    } else {
        return 2;
    }
}

int RevertDir(int dir){
    return 3-dir;
}

int main() {
    cin >> n >> t;
    cin >> r >> c >> d;

    int curr_dir = GetDir(d);   
    
    while(t--){
        if(IsBoundary(r,c, curr_dir)){
            curr_dir = RevertDir(curr_dir);
        } else {
            r += dr[curr_dir];
            c += dc[curr_dir];
        }
    }

    cout << r << " " << c;
    
    return 0;
}