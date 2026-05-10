#include <iostream>
#include <algorithm>

#define MAX_N 1005

using namespace std;

class Student{
    public:
        int height;
        int weight;
        int index;
        Student(int height, int weight, int index){
            this->height = height;
            this->weight = weight;
            this->index = index;
        }
        Student(){}
};

bool cmp(const Student &s1, const Student &s2){
    if(s1.height != s2.height) {
        return s1.height < s2.height;
    }

    return s1.weight > s2.weight;
}

int main() {
  
    int n;
    cin >> n;

    Student students[MAX_N];
    for(int i=0; i<n; i++){
        int h, w;
        cin >> h >> w;

        students[i] = Student(h,w,i+1);
    }

    sort(students, students+n, cmp);

    for(int i=0; i<n; i++){
        cout << students[i].height << " " << students[i].weight << " " << students[i].index << "\n";
    }
    
    return 0;
}