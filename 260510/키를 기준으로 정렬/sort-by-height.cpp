#include <iostream>
#include <string>
#include <algorithm>

#define MAX_N 11

using namespace std;

class Person {
    public:
        string name;
        int height;
        int weight;
    Person(string name, int height, int weight){
        this->name = name;
        this->height = height;
        this->weight = weight;
    }        
    Person(){}
};

bool cmp(const Person &p1, const Person &p2){   
    return p1.height < p2.height;
}

int main() {
    int n;
    cin >> n;

    Person persons[MAX_N];

    for(int i = 0; i < n; i++){
        string name;
        int height, weight;

        cin >> name >> height >> weight;
        
        persons[i] = Person(name, height, weight);
    }

    sort(persons, persons+n, cmp);

    for(int i = 0; i < n; i++){
        cout << persons[i].name << " " << persons[i].height << " " << persons[i].weight << "\n";
    }

    return 0;
}