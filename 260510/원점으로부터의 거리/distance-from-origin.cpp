#include <iostream>
#include <algorithm>
#include <cmath>

#define MAX_N 1005

using namespace std;

class Point{
    public: 
        int x;
        int y;
        int number;
        Point(int x, int y, int number){
            this->x = x;
            this->y = y;
            this->number = number;
        }
        Point(){}
};

bool cmp(const Point &p1, const Point &p2){
    Point origin = Point(0,0,0);

    int dist1 = abs(origin.x - p1.x) + abs(origin.y - p1.y);
    int dist2 = abs(origin.x - p2.x) + abs(origin.y - p2.y);

    if(dist1 != dist2) return dist1 < dist2;

    return p1.number < p2.number;
}

int main() {

    int n;
    cin >> n;

    Point points[MAX_N];
    
    for(int i=0; i<n; i++){
        int x,y;
        cin >> x >> y;
        points[i] = Point(x,y,i+1);
    }

    sort(points, points+n, cmp);

    for(int i=0; i<n; i++){
        cout << points[i].number << "\n";
    }
    
    return 0;
}