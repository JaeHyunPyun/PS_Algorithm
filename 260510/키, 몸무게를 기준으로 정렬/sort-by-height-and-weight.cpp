#include <iostream>
#include <string>
#include <algorithm>

#define MAX_N 11

using namespace std;

class Student{
    public:
        string name;
        int height;
        int weight;
        Student(string name, int height, int weight){
            this->name = name;
            this->height = height;
            this->weight = weight;
        }
        Student(){}
};

bool cmp(const Student &s1, const Student &s2){
    if(s1.height!= s2.height){
        return s1.height < s2.height;
    }

    return s1.weight > s2.weight;
}

void print(Student student[], int size){
    for(int i=0; i<size; i++){
        cout << student[i].name << " " << student[i].height << " " << student[i].weight << "\n";
    }
}

int main() {
    
    int n;
    cin >> n;

    Student students[MAX_N];
    for(int i=0; i<n; i++){
        string name;
        int height, weight;
        cin >> name >> height >> weight;

        students[i] = Student(name, height, weight);
    }

    sort(students, students+n, cmp);
    print(students, n);

    return 0;
}