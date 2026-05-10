#include <iostream>
#include <algorithm>
#include <string>
#include <iomanip>

using namespace std;

class Student {
    public:
        string name;
        int height;
        double weight;
        Student(string name, int height, double weight){
            this->name = name;
            this->height = height;
            this->weight = weight;
        }
        Student(){}
};

bool cmpHeight(const Student &s1, const Student &s2){
    return s1.height > s2.height;
}

bool cmpName(const Student &s1, const Student &s2){
    return s1.name < s2.name;
}

void print(Student* students, int size){
    for(int i=0; i<size; i++){
        cout << students[i].name << " " << students[i].height << " " << fixed << setprecision(1) << students[i].weight << "\n";
    }
}

int main() {

    Student students[5];
    for(int i=0; i<5; i++){
        string n;
        int h;
        double w;

        cin >> n >> h >> w;
        students[i] = Student(n,h,w);
    }

    sort(students, students+5, cmpName);

    cout << "name" << "\n";
    print(students, 5);
    cout << "\n";
    
    sort(students, students+5, cmpHeight);

    cout << "height" << "\n";
    print(students, 5);

    return 0;
}