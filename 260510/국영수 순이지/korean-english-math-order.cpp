#include <iostream>
#include <string>
#include <tuple>
#include <algorithm>

#define MAX_N 11

using namespace std;

class Student{
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
        Student(){}
};

bool cmp(const Student &s1, const Student &s2){
    return make_tuple(s1.kor, s1.eng, s1.math) >  make_tuple(s2.kor, s2.eng, s2.math);
}


int main() {
    
    int n;
    cin >> n;

    Student students[MAX_N];

    for(int i=0; i<n; i++){
        string name;
        int kor, eng, math;

        cin >> name >> kor >> eng >> math;

        students[i] = Student(name, kor, eng, math);
    }

    sort(students, students+n, cmp);

    for(int i=0; i<n; i++){
        cout << students[i].name << " " << students[i].kor << " " << students[i].eng << " " << students[i].math << "\n";
    }


    return 0;
}