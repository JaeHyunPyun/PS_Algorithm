#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

#define MAX_N 15

class Profile{
    public:
        string name;
        string postal_code;
        string location;
        Profile(string name, string postal_code, string location){
            this->name = name;
            this->postal_code = postal_code;
            this->location = location;
        }
        Profile(){}
};

// 사전상 객체가 비교대상보다 더 이전인 경우 -1 
// 사전상 객체가 비교대상보다 더 이후인 경우 1

int main() {
    
    int N;
    cin >> N;

    int final_index;
    string final_name = "";

    Profile profiles[MAX_N];

    for(int i=0; i<N; i++){
        string name_input;
        string code_input;
        string location_input;

        cin >> name_input >> code_input >> location_input;

        if(name_input.compare(final_name)>0){
            final_index = i;
            final_name = name_input;
        }

        profiles[i] = Profile(name_input, code_input, location_input);
    }

    cout << "name " << profiles[final_index].name << "\n";
    cout << "addr " << profiles[final_index].postal_code << "\n";
    cout << "city " << profiles[final_index].location;


    return 0;
}