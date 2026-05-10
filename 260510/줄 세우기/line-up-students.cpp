#include <iostream>
#include <algorithm>
#include <tuple>

#define MAX_N 1005

using namespace std;

class Student{
    public:
        int height;
        int weight;
        int number;
        Student(int height, int weight, int number){
            this->height = height;
            this->weight = weight;
            this->number = number;
        }
        Student(){}

        void print() const {
            cout << height <<  " " << weight << " " << number << "\n";
        }
};

bool cmp(const Student & s1, const Student & s2){
    return make_tuple(-s1.height, -s1.weight, s1.number) < make_tuple(-s2.height, -s2.weight, s2.number);
}

int main() {
  
    int n;
    cin >> n;

    Student students[MAX_N];

    for(int i=0; i<n; i++){
        int h,w;
        cin >> h >> w;
        
        students[i] = Student(h,w,i+1);
    }

    sort(students, students+n, cmp);

    for(int i=0; i<n; i++){
        students[i].print();
    }

    return 0;
}