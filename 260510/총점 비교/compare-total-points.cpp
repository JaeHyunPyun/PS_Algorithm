#include <iostream>
#include <string>
#include <algorithm>

#define MAX_N 11

using namespace std;

class Student {
    public: 
        string name;
        int kor;
        int eng;
        int math;
        Student(string name, int kor, int eng, int math){
            this->name = name;
            this->kor = kor;
            this->eng = eng;
            this->math = math;
        }
        Student(){};
        
        int sum() const {
            return kor + eng + math;
        }

        void print(){
            cout << name << " " << kor << " " << eng << " " << math << "\n";
        }
};

bool cmp(const Student &s1, const Student &s2){
    return s1.sum() < s2.sum();
}


int main() {
    
    int N;
    cin >> N;

    Student students[MAX_N];

    for(int i=0; i<N; i++){
        string name;
        int kor, eng, math;

        cin >> name >> kor >> eng >> math;

        students[i] = Student(name, kor, eng, math);
    }

    sort(students, students+N, cmp);

    for(int i=0; i<N; i++){
        students[i].print();
    }


    return 0;
}