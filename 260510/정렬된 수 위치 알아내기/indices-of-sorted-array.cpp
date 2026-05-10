#include <iostream>
#include <algorithm>

#define MAX_N 1005
using namespace std;

class Number{
    public:
        int value;
        int index;
        Number(int value, int index){
            this->value = value;
            this->index = index;
        }
        Number(){}
};

bool cmp(const Number &n1, const Number &n2){
    if(n1.value != n2.value) return n1.value < n2.value;

    return n1.index < n2.index;
}

int main() {
    
    int n;
    cin >> n;

    Number numbers[MAX_N];
    for(int i=0; i<n; i++){
        int v;
        cin >> v;

        numbers[i] = Number(v, i+1);
    }

    sort(numbers, numbers+n, cmp);

    for(int i=1; i<=n; i++){
        for(int j=0; j<n; j++){
            if(i == numbers[j].index) {
                cout << j+1 << " ";
            }   
        }
    }
    


    return 0;
}